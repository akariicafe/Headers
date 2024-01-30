@class SVKeyValueObserver;

@interface SXVideoPlayerAdSlotVisibilityMonitor : SXVisibilityMonitor

@property (readonly, nonatomic) SVKeyValueObserver *observer;

- (void).cxx_destruct;
- (id)initWithVideoPlayerViewController:(id)a0 videoAdSlotVisiblePercentageProvider:(id)a1;

@end
