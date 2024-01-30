@class UIScrollView, SRHMediaViewsStore, UIScrollViewMonitor;

@interface SRHMediaEventsCollector : NSObject <UIScrollViewMonitorDelegate> {
    UIScrollView *_scrollView;
    UIScrollViewMonitor *_scrollViewMonitor;
    SRHMediaViewsStore *_mediaViewsStore;
}

+ (void)initialize;

- (void)didBecomeActive;
- (void)didEnterBackground;
- (void)dealloc;
- (id)initWithScrollView:(id)a0 scrollMonitor:(id)a1;
- (void)scrollViewMonitorDidStartMonitoring:(id)a0;
- (void)scrollViewMonitorDidStopMonitoring:(id)a0;
- (void)scrollViewMonitorScrollDid:(id)a0 addView:(id)a1 removeView:(id)a2;
- (void)scrollViewMonitorScrollDidScrolled:(id)a0;
- (void)_addMediaSubviewsOfView:(id)a0;
- (void)_checkViewForMediaContent:(id)a0 withCompletionHandler:(id /* block */)a1;
- (long long)_addMediaSubviewsOfView:(id)a0 viewsTraversed:(long long)a1;
- (void)_removeMediaSubviewsOfView:(id)a0;
- (long long)_removeMediaSubviewsOfView:(id)a0 viewsTraversed:(long long)a1;
- (id)initWithScrollView:(id)a0 scrollMonitor:(id)a1 mediaViewsStore:(id)a2;

@end
