@class UIPushBehavior;

@interface OKNavigatorScrollViewController : OKNavigatorScrollViewControllerProxy {
    UIPushBehavior *_velocityPushBehavior;
}

+ (id)supportedSettings;

- (struct CGPoint { double x0; double x1; })contentOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (void)scrollViewWillBeginDragging:(id)a0;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)viewDidLoad;
- (void)commonInit;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (id)dynamicsPushBehaviors;
- (id)layoutSettingsKeys;
- (void)pushWatchdog:(id)a0;
- (void)setSettingContentSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })settingContentSize;
- (void)setSettingIndicatorStyle:(unsigned long long)a0;
- (void)setSettingAlwaysBounceVertical:(BOOL)a0;
- (void)setSettingAlwaysBounceHorizontal:(BOOL)a0;
- (void)setSettingShowsVerticalScrollIndicator:(BOOL)a0;
- (void)setSettingShowsHorizontalScrollIndicator:(BOOL)a0;

@end
