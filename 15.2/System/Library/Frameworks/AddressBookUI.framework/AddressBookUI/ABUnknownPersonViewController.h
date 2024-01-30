@class NSString, CNContactViewController;
@protocol ABUnknownPersonViewControllerDelegate;

@interface ABUnknownPersonViewController : UIViewController <CNContactViewControllerPrivateDelegate> {
    void *_addressBook;
    void *_displayedPerson;
}

@property (retain, nonatomic) CNContactViewController *cnContactViewController;
@property (nonatomic) id<ABUnknownPersonViewControllerDelegate> unknownPersonViewDelegate;
@property (nonatomic) const void *addressBook;
@property (nonatomic) const void *displayedPerson;
@property (copy, nonatomic) NSString *alternateName;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) BOOL allowsActions;
@property (nonatomic) BOOL allowsAddingToAddressBook;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)decodeRestorableStateWithCoder:(id)a0;
- (id)contactStore;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)encodeRestorableStateWithCoder:(id)a0;
- (void)loadView;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (void)loadContactViewController;
- (BOOL)contactViewController:(id)a0 shouldPerformDefaultActionForContact:(id)a1 property:(id)a2 labeledValue:(id)a3;

@end
