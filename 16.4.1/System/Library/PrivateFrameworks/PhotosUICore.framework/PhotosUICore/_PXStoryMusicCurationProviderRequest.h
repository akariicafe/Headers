@class NSMutableArray, NSArray, NSProgress, NSString, PHAssetCollection, PXStoryMusicCurationProviderOptions;

@interface _PXStoryMusicCurationProviderRequest : NSObject <NSProgressReporting> {
    NSMutableArray *_resultHandlers;
    BOOL _hasStarted;
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) PXStoryMusicCurationProviderOptions *options;
@property (readonly, nonatomic) NSArray *recentlyUsedFlexSongIDs;
@property (readonly, nonatomic) NSArray *recentlyUsedAppleMusicSongIDs;
@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)start;
- (void).cxx_destruct;
- (void)_handleCurationResult:(id)a0;
- (void)appendResultHandler:(id /* block */)a0;
- (id)initWithAssetCollection:(id)a0 options:(id)a1 recentlyUsedFlexSongIDs:(id)a2 recentlyUsedAppleMusicSongIDs:(id)a3 completion:(id /* block */)a4;

@end
