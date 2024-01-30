@interface UIStatusBarLockScreenStyleAttributes : UIStatusBarNewUIStyleAttributes

- (Class)foregroundStyleClass;
- (double)heightForMetrics:(long long)a0;
- (BOOL)shouldShowInternalItemType:(int)a0 withScreenCapabilities:(id)a1;
- (BOOL)isLockScreen;

@end
