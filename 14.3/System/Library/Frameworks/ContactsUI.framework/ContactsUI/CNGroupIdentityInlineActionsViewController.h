@class NSString, CNContactInlineActionsViewController, CNGroupIdentityInlineActionsViewConfiguration, CNGroupIdentity;

@interface CNGroupIdentityInlineActionsViewController : UIViewController <CNContactInlineActionsViewControllerDelegate_Internal, CNUIObjectViewControllerDelegate, CNGroupIdentityActionItemDelegate>

@property (retain, nonatomic) CNGroupIdentity *group;
@property (retain, nonatomic) CNContactInlineActionsViewController *inlineActionsViewController;
@property (readonly, nonatomic) CNGroupIdentityInlineActionsViewConfiguration *configuration;
@property (readonly, nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (BOOL)contactInlineActionsViewController:(id)a0 shouldPresentDisambiguationUIForActionOfType:(id)a1;
- (void)contactInlineActionsViewController:(id)a0 didSelectActionOfType:(id)a1;
- (BOOL)contactInlineActionsViewController:(id)a0 canPerformGroupActionOfType:(id)a1;
- (id)contactInlineActionsViewController:(id)a0 overrideImageForActionOfType:(id)a1;
- (id)contactInlineActionsViewController:(id)a0 overrideTitleForActionOfType:(id)a1;
- (BOOL)contactInlineActionsViewController:(id)a0 shouldOverrideEnabledStateForActionOfType:(id)a1;
- (BOOL)contactInlineActionsViewController:(id)a0 overrideEnabledStateForActionOfType:(id)a1;
- (void)groupIdentityActionItem:(id)a0 didUpdateOverrideEnabledState:(BOOL)a1;
- (double)actionsViewHeightThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)groupIdentityActionItem:(id)a0 didUpdateActionBlock:(id /* block */)a1;
- (void)updateActionsViewForUpdatedActionItem:(id)a0;
- (id)hostingViewControllerForController:(id)a0;
- (id)actionsView;
- (id)actionsContainerView;
- (id)initWithGroupIdentity:(id)a0 actionsViewConfiguration:(id)a1;
- (void)setupActionsView;
- (id)viewForActionAtIndex:(unsigned long long)a0;
- (void)viewDidLoad;

@end
