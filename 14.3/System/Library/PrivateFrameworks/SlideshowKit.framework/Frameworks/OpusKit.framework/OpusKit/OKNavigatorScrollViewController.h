@class UIPushBehavior;

@interface OKNavigatorScrollViewController : OKNavigatorScrollViewControllerProxy {
    UIPushBehavior *_velocityPushBehavior;
}

+ (id)supportedSettings;

- (struct CGSize { double x0; double x1; })contentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (void)scrollViewDidScroll:(id)a0;
- (void)commonInit;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
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
