@class NSString, UITextField, NSArray;
@protocol _SFPopoverSourceInfo, _SFBarRegistrationToken, _SFNavigationBarDelegateCommon;

@interface UnifiedBar : SFUnifiedBar <SFUnifiedTabBarNavigationDelegate, _SFNavigationBarCommon, _SFBarRegistrationObserving> {
    id<_SFBarRegistrationToken> _barRegistrationToken;
}

@property (weak) id<_SFNavigationBarDelegateCommon> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UITextField *textField;
@property (readonly, copy, nonatomic) NSArray *popoverPassthroughViews;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } URLOutlineFrameInNavigationBarSpace;
@property (readonly, nonatomic) id<_SFPopoverSourceInfo> formatMenuButtonPopoverSourceInfo;
@property (readonly, nonatomic) id<_SFPopoverSourceInfo> URLOutlinePopoverSourceInfo;

- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (void)metricsDidChange;
- (void)animateSafariIconLinkFromPoint:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)animateLinkImage:(struct CGImage { } *)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2 toBarItem:(long long)a3 afterImageDisappearsBlock:(id /* block */)a4 afterDestinationLayerBouncesBlock:(id /* block */)a5;
- (id)popoverSourceInfoForBarItem:(long long)a0;
- (id)viewForBarItem:(long long)a0;
- (void)didCompleteBarRegistrationWithToken:(id)a0;
- (void)unifiedTabBarURLTapped:(id)a0 completionHandler:(id /* block */)a1;
- (void)unifiedTabBarMenuButtonTapped:(id)a0;
- (void)unifiedTabBarMenuButtonReceivedTouchDown:(id)a0;
- (void)unifiedTabBarMenuButtonClicked:(id)a0;
- (void)unifiedTabBarVoiceSearchButtonTapped:(id)a0;
- (void)unifiedTabBarReloadButtonTapped:(id)a0;
- (void)unifiedTabBarStopButtonTapped:(id)a0;
- (void)unifiedTabBarReaderButtonTapped:(id)a0;
- (void)unifiedTabBarTranslationButtonTapped:(id)a0;
- (void)unifiedTabBarMediaStateMuteButtonTapped:(id)a0;
- (void)unifiedTabBar:(id)a0 extensionButtonTapped:(id)a1 extension:(id)a2;
- (void)unifiedTabBar:(id)a0 multipleExtensionButtonTapped:(id)a1;
- (void)squishedBarTapped;

@end
