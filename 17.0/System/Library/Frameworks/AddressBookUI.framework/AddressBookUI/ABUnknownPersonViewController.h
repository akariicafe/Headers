@class NSString, CNContactViewController;
@protocol ABUnknownPersonViewControllerDelegate;

@interface ABUnknownPersonViewController : UIViewController <CNContactViewControllerPrivateDelegate> {
    void *_addressBook;
    void *_displayedPerson;
}

@property (retain, nonatomic) CNContactViewController *cnContactViewController;
@property (nonatomic) id<ABUnknownPersonViewControllerDelegate> unknownPersonViewDelegate;
@property (nonatomic) void *addressBook;
@property (nonatomic) void *displayedPerson;
@property (copy, nonatomic) NSString *alternateName;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) BOOL allowsActions;
@property (nonatomic) BOOL allowsAddingToAddressBook;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)decodeRestorableStateWithCoder:(id)a0;
- (void)encodeRestorableStateWithCoder:(id)a0;
- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (id)contactStore;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)contactViewController:(id)a0 shouldPerformDefaultActionForContact:(id)a1 property:(id)a2 labeledValue:(id)a3;
- (void)loadContactViewController;

@end
