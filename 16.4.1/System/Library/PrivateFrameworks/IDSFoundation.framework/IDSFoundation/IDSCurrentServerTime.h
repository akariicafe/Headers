@class CUTDeferredTaskQueue, IDSCurrentServerTimePair;
@protocol IDSCurrentServerTimeProvider;

@interface IDSCurrentServerTime : NSObject

@property (retain, nonatomic) id<IDSCurrentServerTimeProvider> serverTimeProvider;
@property (retain) IDSCurrentServerTimePair *timePair;
@property (readonly, nonatomic) CUTDeferredTaskQueue *refreshServerTimeTask;

+ (id)sharedInstance;

- (id)currentServerTimeDate;
- (double)_refreshTimeInterval;
- (void)_refreshServerTime;
- (void)_storeCurrentTime;
- (double)currentServerTimeInterval;
- (id)initWithServerTimeProvider:(id)a0;
- (void)_storeInitialServerTimeIfNeeded;
- (void).cxx_destruct;

@end
