@class NSString, CNContactViewController, CNContact;
@protocol ABNewPersonViewControllerDelegate;

@interface ABNewPersonViewController : UIViewController <CNContactViewControllerPrivateDelegate> {
    void *_addressBook;
    void *_displayedPerson;
    id<ABNewPersonViewControllerDelegate> _newPersonViewDelegate;
}

@property (retain, nonatomic) CNContactViewController *cnContactViewController;
@property (nonatomic) void *parentSource;
@property (retain, nonatomic) CNContact *mergeContact;
@property (nonatomic) BOOL showsCancelButton;
@property (nonatomic) id<ABNewPersonViewControllerDelegate> newPersonViewDelegate;
@property (nonatomic) void *addressBook;
@property (nonatomic) void *displayedPerson;
@property (nonatomic) void *parentGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)save:(id)a0;
- (id)init;
- (void)dealloc;
- (id)initWithStyle:(int)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)loadView;
- (void)viewDidAppear:(BOOL)a0;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithNibName:(id)a0 bundle:(id)a1 style:(int)a2;
- (void)loadContactViewController;
- (BOOL)savesNewContactOnSuspend;
- (void)setSavesNewContactOnSuspend:(BOOL)a0;

@end
