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
@property (nonatomic) const void *addressBook;
@property (nonatomic) const void *displayedPerson;
@property (nonatomic) const void *parentGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)save:(id)a0;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithStyle:(int)a0;
- (void)dealloc;
- (id)init;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1 style:(int)a2;
- (void)loadContactViewController;
- (BOOL)savesNewContactOnSuspend;
- (void)setSavesNewContactOnSuspend:(BOOL)a0;

@end
