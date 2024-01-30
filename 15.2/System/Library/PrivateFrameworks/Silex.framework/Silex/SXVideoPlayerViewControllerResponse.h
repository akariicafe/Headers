@class SXVideoPlayerVisibilityMonitor, SXVideoAnalyticsRouter;

@interface SXVideoPlayerViewControllerResponse : NSObject

@property (nonatomic) BOOL shouldAutoplay;
@property (nonatomic) BOOL expectVideoPlayerViewController;
@property (retain, nonatomic) SXVideoAnalyticsRouter *analyticsRouter;
@property (retain, nonatomic) SXVideoPlayerVisibilityMonitor *visibilityMonitor;

- (void).cxx_destruct;

@end
