@class CNContactStore, NSArray, NSString, UIViewController;
@protocol CNUnknownContactsControllerDelegate;

@interface CNUnknownContactsController : NSObject <CNContactViewControllerDelegate, CNMultipleUnknownContactsViewControllerDelegate>

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) NSArray *contacts;
@property (retain, nonatomic) UIViewController *displayedController;
@property (weak, nonatomic) id<CNUnknownContactsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (BOOL)contactViewController:(id)a0 shouldPerformDefaultActionForContactProperty:(id)a1;
- (id)viewController;
- (void).cxx_destruct;
- (id)initWithContacts:(id)a0 contactStore:(id)a1;
- (BOOL)multipleUnknownContactsViewController:(id)a0 shouldPerformDefaultActionForContactProperty:(id)a1;
- (void)multipleUnknownContactsViewControllerDidComplete:(id)a0;

@end
