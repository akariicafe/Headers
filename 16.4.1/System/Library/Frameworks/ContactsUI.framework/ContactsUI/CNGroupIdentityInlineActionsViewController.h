@class NSString, CNContactInlineActionsViewController, CNGroupIdentityInlineActionsViewConfiguration, CNGroupIdentity;
@protocol CNGroupIdentityInlineActionsViewControllerDelegate;

@interface CNGroupIdentityInlineActionsViewController : UIViewController <CNContactInlineActionsViewControllerDelegate_Internal, CNUIObjectViewControllerDelegate, CNGroupIdentityActionItemDelegate>

@property (retain, nonatomic) CNContactInlineActionsViewController *inlineActionsViewController;
@property (readonly, nonatomic) CNGroupIdentityInlineActionsViewConfiguration *configuration;
@property (readonly, nonatomic) long long style;
@property (retain, nonatomic) CNGroupIdentity *group;
@property (weak, nonatomic) id<CNGroupIdentityInlineActionsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (id)hostingViewControllerForController:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)contactInlineActionsViewController:(id)a0 canPerformGroupActionOfType:(id)a1;
- (id)actionsContainerView;
- (id)actionsView;
- (double)actionsViewHeightThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)contactInlineActionsViewController:(id)a0 didPerformActionOfType:(id)a1 fromDisambiguation:(BOOL)a2;
- (void)contactInlineActionsViewController:(id)a0 didSelectActionOfType:(id)a1;
- (BOOL)contactInlineActionsViewController:(id)a0 overrideEnabledStateForActionOfType:(id)a1;
- (id)contactInlineActionsViewController:(id)a0 overrideImageForActionOfType:(id)a1;
- (id)contactInlineActionsViewController:(id)a0 overrideTitleForActionOfType:(id)a1;
- (BOOL)contactInlineActionsViewController:(id)a0 shouldOverrideEnabledStateForActionOfType:(id)a1;
- (BOOL)contactInlineActionsViewController:(id)a0 shouldPresentDisambiguationUIForActionOfType:(id)a1;
- (void)contactInlineActionsViewController:(id)a0 willPresentDisambiguationUIForActionType:(id)a1;
- (void)groupIdentityActionItem:(id)a0 didUpdateActionBlock:(id /* block */)a1;
- (void)groupIdentityActionItem:(id)a0 didUpdateOverrideEnabledState:(BOOL)a1;
- (id)initWithGroupIdentity:(id)a0 actionsViewConfiguration:(id)a1;
- (void)setupActionsView;
- (BOOL)shouldOverrideEnabledStateForActionItem:(id)a0;
- (void)updateActionsViewForUpdatedActionItem:(id)a0;
- (id)viewForActionAtIndex:(unsigned long long)a0;

@end
