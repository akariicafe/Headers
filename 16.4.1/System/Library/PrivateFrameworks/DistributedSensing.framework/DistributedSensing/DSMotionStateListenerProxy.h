@class NSDate, DSClientMotionDataOptions, NSData, NSHashTable, NSError, DSProviderDevice;
@protocol DSListenerClientProtocol;

@interface DSMotionStateListenerProxy : DSListener {
    NSDate *_previousIntervalStartTime;
    unsigned int _listenerCount;
}

@property (retain) NSHashTable *observers;
@property (retain) NSHashTable *pendingObservers;
@property (retain, nonatomic) DSClientMotionDataOptions *options;
@property int listenerState;
@property (retain, nonatomic) NSData *cachedData;
@property (retain, nonatomic) DSProviderDevice *cachedProvider;
@property (weak, nonatomic) id<DSListenerClientProtocol> lastobserver;
@property (retain, nonatomic) NSError *error;

+ (id)sharedInstance;

- (void)_addObserver:(id)a0;
- (void)_removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_clearCache;
- (void)failedToStartListenerWithError:(id)a0;
- (void)_replyWithCachedDataToObserver:(id)a0;
- (void)startedListener;
- (void)stoppedListener;
- (void)receivedData:(id)a0 fromProvider:(id)a1;
- (void)requestMotionState;
- (void)startMotionStateListenerWithObserver:(id)a0;
- (void)stopMotionStateListenerWithObserver:(id)a0;
- (void)updateProviders:(id)a0;

@end
