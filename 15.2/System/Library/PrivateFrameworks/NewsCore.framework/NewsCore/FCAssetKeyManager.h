@class NSString, FCThreadSafeMutableDictionary, FCThreadSafeMutableSet;
@protocol FCAssetKeyServiceType, FCAssetKeyCacheType, FCOperationThrottler, FCAssetKeyManagerDelegate;

@interface FCAssetKeyManager : NSObject <FCOperationThrottlerDelegate, FCAssetKeyManagerType> {
    id<FCAssetKeyServiceType> _service;
    id<FCAssetKeyCacheType> _cache;
    id<FCAssetKeyManagerDelegate> _delegate;
    id<FCOperationThrottler> _throttler;
    FCThreadSafeMutableSet *_pendingWrappingKeyIDs;
    FCThreadSafeMutableDictionary *_errorsByKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)operationThrottler:(id)a0 performAsyncOperationWithCompletion:(id /* block */)a1;
- (id)cachedWrappingKeyWithID:(id)a0;
- (void)fetchWrappingKeyWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearUnauthorizedAssetKeys;
- (void).cxx_destruct;
- (void)eraseAllKeys;

@end
