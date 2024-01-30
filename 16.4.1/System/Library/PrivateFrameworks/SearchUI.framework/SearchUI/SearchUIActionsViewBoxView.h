@class CNContactInlineActionsViewController;

@interface SearchUIActionsViewBoxView : NUIContainerBoxView

@property (retain) CNContactInlineActionsViewController *actionsViewController;

+ (id)inlineActionsBoxView;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)tlk_updateForAppearance:(id)a0;
- (void)didMoveToWindow;
- (void).cxx_destruct;

@end
