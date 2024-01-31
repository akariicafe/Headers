@class UIActivityViewController, NSArray, NSString, CNContactCardFieldPicker, UIView, CNContactListShareContactsActionContext;
@protocol CNContactListActionDelegate;

@interface CNContactListShareContactsAction : NSObject <UIActivityViewControllerObjectManipulationDelegate, CNContactCardFieldPickerDelegate, CNContactListAction>

@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSArray *filteredContacts;
@property (retain, nonatomic) CNContactCardFieldPicker *fieldPicker;
@property (retain, nonatomic) UIActivityViewController *activityViewController;
@property (retain, nonatomic) UIView *sourceView;
@property (weak, nonatomic) id<CNContactListActionDelegate> delegate;
@property (readonly, nonatomic) CNContactListShareContactsActionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (void)performAction;
- (void).cxx_destruct;
- (BOOL)_customizationAvailableForActivityViewController:(id)a0;
- (id)_customizationGroupsForActivityViewController:(id)a0;
- (id)activityItemForContacts:(id)a0;
- (void)contactCardFieldPicker:(id)a0 didFinishWithContacts:(id)a1;
- (id)customActionViewControllerForActivityViewController:(id)a0;
- (id)customLocalizedActionTitleForActivityViewController:(id)a0;
- (BOOL)editRequiresAuthorization;
- (id)initWithContacts:(id)a0 sourceView:(id)a1;
- (id)initWithContacts:(id)a0 sourceView:(id)a1 context:(id)a2;
- (void)presentFilterFieldPicker;
- (void)presentShareSheet;
- (void)setupForContactFieldPicker;
- (BOOL)shouldReloadListOnCompletion;

@end
