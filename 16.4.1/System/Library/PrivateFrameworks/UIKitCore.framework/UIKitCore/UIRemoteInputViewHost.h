@class UIWindow, UIInputViewSet, UIInputViewController, UIRemoteInputViewInfo, UIView, NSLayoutConstraint, UIViewController;

@interface UIRemoteInputViewHost : NSObject {
    UIViewController *_inputRootViewController;
    UIInputViewController *_inputViewController;
    UIView *_inputView;
    NSLayoutConstraint *_inputViewWidthConstraint;
    NSLayoutConstraint *_inputViewHeightConstraint;
    UIViewController *_assistantViewController;
}

@property (retain, nonatomic) UIInputViewSet *inputViewSet;
@property (readonly, nonatomic) UIRemoteInputViewInfo *inputViewInfo;
@property (readonly, nonatomic) UIRemoteInputViewInfo *assistantViewInfo;
@property (readonly, nonatomic) UIWindow *inputViewWindow;
@property (readonly, nonatomic) UIWindow *assistantViewWindow;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })assistantViewInsets;
- (id)remoteAssistantItemForResponder:(id)a0;
- (id)rtiGroupsForBarButtonItemGroups:(id)a0;
- (id)settingsScene;
- (BOOL)updateAssistantViewIfNecessary;
- (BOOL)updateCustomInputViewIfNecessary;
- (void)updateInputViewsIfNecessary;

@end
