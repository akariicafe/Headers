@class NSString, NTKJetsamInfoFetcher;

@interface NTKJetsamInfoInterval : NSObject {
    NTKJetsamInfoFetcher *_fetcher;
}

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) struct jetsam_info { long long currentKB; long long maxLifetimeKB; long long maxIntervalKB; } startInfo;
@property (readonly, nonatomic) struct jetsam_info { long long x0; long long x1; long long x2; } currentInfo;

- (id)initWithLabel:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)logCurrentInterval;
- (BOOL)waitUntilDirtyMemoryDrained;
- (BOOL)waitUntilDirtyMemoryReaches:(long long)a0 maxWaitMS:(int)a1;

@end
