@class NSString, FCThreadSafeMutableDictionary, FCThreadSafeMutableSet;
@protocol FCAssetKeyServiceType, FCAssetKeyCacheType, FCOperationThrottler, FCAssetKeyManagerDelegate;

@interface FCAssetKeyManager : NSObject <FCOperationThrottlerDelegate, FCAssetKeyManagerType>

@property (readonly, nonatomic) id<FCAssetKeyServiceType> service;
@property (readonly, nonatomic) id<FCAssetKeyCacheType> cache;
@property (readonly, weak, nonatomic) id<FCAssetKeyManagerDelegate> delegate;
@property (readonly, nonatomic) id<FCOperationThrottler> throttler;
@property (readonly, nonatomic) FCThreadSafeMutableSet *pendingWrappingKeyIDs;
@property (readonly, nonatomic) FCThreadSafeMutableDictionary *errorsByKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)eraseAllKeys;
- (void).cxx_destruct;
- (void)operationThrottler:(id)a0 performAsyncOperationWithCompletion:(id /* block */)a1;
- (void)clearUnauthorizedAssetKeys;
- (BOOL)_canRetryAfterNetworkError:(id)a0;
- (void)fetchWrappingKeyWithID:(id)a0 completionHandler:(id /* block */)a1;
- (id)cachedWrappingKeyWithID:(id)a0;
- (id)initWithService:(id)a0 cache:(id)a1 delegate:(id)a2;

@end
