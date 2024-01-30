@class HFCameraClipVideoAssetContextProvider, HMCameraClipManager, NSString, HMCameraClip, NSObject;
@protocol OS_dispatch_queue;

@interface HFCameraClipPlayerItem : AVPlayerItem <AVAssetResourceLoaderDelegate, HFCameraClipQueuableItem>

@property (readonly, nonatomic) HMCameraClipManager *clipManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceLoaderQueue;
@property (readonly, nonatomic) HFCameraClipVideoAssetContextProvider *videoContextProvider;
@property (readonly, nonatomic) HMCameraClip *clip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;

+ (id)_assetOptionsForClip:(id)a0;
+ (id)_playlistURL;

- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 automaticallyLoadedAssetKeys:(id)a1;
- (id)initWithClipManager:(id)a0 clip:(id)a1;

@end
