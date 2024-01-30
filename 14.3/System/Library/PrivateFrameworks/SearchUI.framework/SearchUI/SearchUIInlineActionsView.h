@class CNContactInlineActionsViewController, CNActionView;

@interface SearchUIInlineActionsView : NUIContainerStackView

@property (retain) CNActionView *messageButton;
@property (retain) CNContactInlineActionsViewController *inlineActionsViewController;
@property (retain) CNActionView *directionsButton;

- (void)tlk_updateForAppearance:(id)a0;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)didMoveToWindow;
- (id)initWithMessageMbutton:(id)a0 inlineActionsViewController:(id)a1 directionsButton:(id)a2;

@end
