@interface AXBZoomTouchManager : NSObject

+ (Class)getZoomBundlePrincipalClassForcingLoad:(BOOL)a0;
+ (void)initializeZoomMonitor;

- (void)updateSettings;
- (void)setZoomTouchEnabled:(BOOL)a0;

@end
