@class APUnfairRecursiveLock, APOrderedMutableDictionary, NSOperationQueue, APProxySessionConfigurationProvider;

@interface APNSURLSessionDemultiplexerManager : NSObject

@property (retain, nonatomic) APOrderedMutableDictionary *sessionDemultiplexerForIdentifier;
@property (retain, nonatomic) NSOperationQueue *sessionSharedDelegateQueue;
@property (retain, nonatomic) APProxySessionConfigurationProvider *sessionConfigProvider;
@property (retain, nonatomic) APUnfairRecursiveLock *lock;

- (void).cxx_destruct;
- (void)_unregisterOldSessionIfRequired;
- (id)_getSessionDemultiplexerForId:(id)a0 maximumRequestCount:(long long)a1;
- (void)_unregisterSessionDemultiplexerWithIdentifier:(id)a0;
- (id)initWithProxySessionConfigProvider:(id)a0;
- (long long)pretapRequestCountForIdentifier:(id)a0;
- (id)sessionDemultiplexerForAdByIdentifier:(id)a0 maximumRequestCount:(long long)a1;
- (void)unregisterSessionDemultiplexerWithIdentifier:(id)a0;

@end
