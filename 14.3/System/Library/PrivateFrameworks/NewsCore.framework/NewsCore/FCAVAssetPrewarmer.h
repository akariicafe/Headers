@class NSCountedSet, FCKeyedOperationQueue, NSMutableDictionary, NSTimer, NSString;
@protocol FCAVAssetResourceLoaderType;

@interface FCAVAssetPrewarmer : NSObject <FCKeyedOperationQueueDelegate, FCAVAssetPrewarming>

@property (retain, nonatomic) id<FCAVAssetResourceLoaderType> assetResourceLoader;
@property (retain, nonatomic) FCKeyedOperationQueue *prefetchQueue;
@property (retain, nonatomic) NSCountedSet *interestedAssets;
@property (retain, nonatomic) NSMutableDictionary *interestModificationDates;
@property (retain, nonatomic) NSMutableDictionary *interestTokensByAsset;
@property (nonatomic) unsigned long long highWaterMark;
@property (retain, nonatomic) NSTimer *reprocessTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_revisitSuspendedState;
- (void)_didChangeInterestedAssets;
- (void)_flushIfNeeded;
- (void)_prewarmAsset:(id)a0 completionHandler:(id /* block */)a1;
- (void)_reprocessInterestedAssets;
- (id)keyedOperationQueue:(id)a0 performAsyncOperationForKey:(id)a1 completion:(id /* block */)a2;
- (void)addInterestInAsset:(id)a0;
- (void)removeInterestInAsset:(id)a0;

@end
