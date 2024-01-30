@class FCKeyedOperationQueue, NSString, NSCountedSet, NSMutableDictionary, NSTimer;
@protocol FCAVAssetResourceLoaderType;

@interface FCAVAssetPrewarmer : NSObject <FCKeyedOperationQueueDelegate, FCAVAssetPrewarming> {
    id<FCAVAssetResourceLoaderType> _assetResourceLoader;
    FCKeyedOperationQueue *_prefetchQueue;
    NSCountedSet *_interestedAssets;
    NSMutableDictionary *_interestModificationDates;
    NSMutableDictionary *_interestTokensByAsset;
    unsigned long long _highWaterMark;
    NSTimer *_reprocessTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)keyedOperationQueue:(id)a0 performAsyncOperationForKey:(id)a1 completion:(id /* block */)a2;
- (void)removeInterestInAsset:(id)a0;
- (void)_reprocessInterestedAssets;
- (void)addInterestInAsset:(id)a0;
- (id)init;
- (void)_revisitSuspendedState;
- (void).cxx_destruct;

@end
