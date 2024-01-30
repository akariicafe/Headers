@class CNContactStore, NSArray, NSString, CNContactViewController;
@protocol ABPersonViewControllerDelegate;

@interface ABPersonViewController : UIViewController <CNContactViewControllerPrivateDelegate, UIViewControllerRestoration>

@property (nonatomic) int style;
@property (nonatomic) int highlightedProperty;
@property (nonatomic) int highlightedMultiValueIdentifier;
@property (nonatomic) BOOL highlightedImportant;
@property (retain, nonatomic) CNContactViewController *cnContactViewController;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (nonatomic) id<ABPersonViewControllerDelegate> personViewDelegate;
@property (nonatomic) const void *addressBook;
@property (nonatomic) const void *displayedPerson;
@property (copy, nonatomic) NSArray *displayedProperties;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) BOOL allowsActions;
@property (nonatomic) BOOL shouldShowLinkedPeople;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewControllerWithRestorationIdentifierPath:(id)a0 coder:(id)a1;

- (void)encodeRestorableStateWithCoder:(id)a0;
- (id)initWithStyle:(int)a0;
- (id)init;
- (void)dealloc;
- (void)loadView;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)contactViewController:(id)a0 shouldPerformDefaultActionForContactProperty:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithAddressBook:(void *)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1 addressBook:(void *)a2 style:(int)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1 addressBook:(void *)a2;
- (void)reloadContactViewController;
- (void)setHighlightedItemForProperty:(int)a0 withIdentifier:(int)a1 important:(BOOL)a2;
- (void)setHighlightedItemForProperty:(int)a0 withIdentifier:(int)a1;
- (void)setHighlightedItemForProperty:(int)a0 withIdentifier:(int)a1 person:(void *)a2;
- (void)setHighlightedItemForProperty:(int)a0 withIdentifier:(int)a1 person:(void *)a2 important:(BOOL)a3;

@end
