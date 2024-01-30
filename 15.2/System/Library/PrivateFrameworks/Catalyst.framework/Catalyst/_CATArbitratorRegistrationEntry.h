@class NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface _CATArbitratorRegistrationEntry : NSObject {
    id mResource;
    unsigned long long mMaxConcurrentCount;
    NSMutableArray *mPendingWaits;
    NSObject<OS_dispatch_source> *mPendingWaitsSource;
    NSObject<OS_dispatch_queue> *mPendingWaitsQueue;
}

@property (readonly, nonatomic) unsigned long long currentCount;

- (void).cxx_destruct;
- (void)invalidate;
- (id)makeResourceProxyIfPossible:(BOOL)a0;
- (id)initWithResource:(id)a0 maxConcurrentCount:(unsigned long long)a1;
- (void)servicePendingWaitTokens;
- (id)makeResourceProxyIfPossibleWithoutLocking:(BOOL)a0;
- (void)pendingWaitsNeedServicing;
- (id)waitForResourceWithExclusive:(BOOL)a0 group:(id)a1;
- (void)resourceProxyDidInvalidate:(id)a0;

@end
