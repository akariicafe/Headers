@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVPlayerInterstitialEventController : AVPlayerInterstitialEventMonitor {
    NSObject<OS_dispatch_queue> *_ivarQueue;
}

@property (copy) NSArray *events;

+ (id)interstitialEventControllerWithPrimaryPlayer:(id)a0;

- (void)setEvents:(id)a0;
- (id)initWithPrimaryPlayer:(id)a0;
- (void)cancelCurrentEventWithResumptionOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)dealloc;

@end
