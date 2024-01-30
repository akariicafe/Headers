@class NSMutableDictionary, BRCMinHeap;

@interface BRCThrottle : BRCThrottleBase {
    NSMutableDictionary *_retryCounters;
    BRCMinHeap *_retryHeap;
}

+ (long long)throttleHashFormat:(id)a0;
+ (long long)throttleHashBytes:(void *)a0 length:(unsigned long long)a1;

- (void).cxx_destruct;
- (void)reset;
- (void)incrementRetryCount:(long long)a0;
- (long long)nsecsToNextRetry:(long long)a0 now:(long long)a1 increment:(BOOL)a2;
- (id)initWithName:(id)a0 andParameters:(id)a1;
- (void)_cleanupStaleCounters:(long long)a0;

@end
