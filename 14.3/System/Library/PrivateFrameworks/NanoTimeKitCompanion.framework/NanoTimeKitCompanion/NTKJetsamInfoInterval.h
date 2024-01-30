@class NSString, NTKJetsamInfoFetcher;

@interface NTKJetsamInfoInterval : NSObject {
    NTKJetsamInfoFetcher *_fetcher;
}

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) struct jetsam_info { long long currentKB; long long maxLifetimeKB; long long maxIntervalKB; } startInfo;
@property (readonly, nonatomic) struct jetsam_info { long long x0; long long x1; long long x2; } currentInfo;

- (void).cxx_destruct;
- (void)reset;
- (id)initWithLabel:(id)a0;
- (BOOL)waitUntilDirtyMemoryDrained;
- (void)logCurrentInterval;
- (BOOL)waitUntilDirtyMemoryReaches:(long long)a0 maxWaitMS:(int)a1;

@end
