@class UIPushBehavior;

@interface OKNavigatorScrollViewController : OKNavigatorScrollViewControllerProxy {
    UIPushBehavior *_velocityPushBehavior;
}

+ (id)supportedSettings;

- (struct CGPoint { double x0; double x1; })contentOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (void)commonInit;
- (void)scrollViewDidScroll:(id)a0;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)dealloc;
- (void)viewDidLoad;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setSettingAlwaysBounceVertical:(BOOL)a0;
- (id)dynamicsPushBehaviors;
- (id)layoutSettingsKeys;
- (void)pushWatchdog:(id)a0;
- (void)setSettingAlwaysBounceHorizontal:(BOOL)a0;
- (void)setSettingContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)setSettingIndicatorStyle:(unsigned long long)a0;
- (void)setSettingShowsHorizontalScrollIndicator:(BOOL)a0;
- (void)setSettingShowsVerticalScrollIndicator:(BOOL)a0;
- (struct CGSize { double x0; double x1; })settingContentSize;

@end
