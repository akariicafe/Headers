@class NSString, NSArray, NSMutableDictionary, PXStoryErrorRepository, PHAssetCollection, PXStorySongsConfiguration, NSObject, PXMediaProvider;
@protocol PXDisplayAssetFetchResult, PXDisplayAssetCollection, OS_dispatch_queue, PFStoryRecipe, PXStoryRelatedProducer, PXDisplayAsset, PXStoryStyleProducer, OS_os_log, PXStoryErrorReporter, PXTapToRadarDiagnosticProvider, PXAssetCollectionActionPerformerDelegate, PXCloudCapabilitiesProvider, PXStoryTimelineProducer, PXStoryMusicCurationProvider, PXAnonymousViewController;

@interface PXStoryConfiguration : NSObject <NSCopying, PXStoryQueueParticipant>

@property (readonly, nonatomic) PHAssetCollection *photoKitAssetCollection;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> assets;
@property (readonly, nonatomic) id<PXDisplayAsset> keyAsset;
@property (readonly, nonatomic) NSArray *referencePersons;
@property (readonly, nonatomic) id<PFStoryRecipe> persistableRecipe;
@property (readonly, nonatomic) PXStoryErrorRepository *errorRepository;
@property (readonly, nonatomic) NSMutableDictionary *userInfo;
@property (readonly, nonatomic) PXStoryConfiguration *parentConfiguration;
@property (retain, nonatomic) PXStorySongsConfiguration *songsConfiguration;
@property (nonatomic) long long songsProducerKind;
@property (nonatomic) BOOL disableBufferingController;
@property (retain, nonatomic) NSString *launchType;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) unsigned long long logContext;
@property (retain, nonatomic) PXMediaProvider *mediaProvider;
@property (retain, nonatomic) id<PXStoryMusicCurationProvider> musicCurationProvider;
@property (retain, nonatomic) id<PXCloudCapabilitiesProvider> cloudCapabilitiesProvider;
@property (retain, nonatomic) id<PXStoryTimelineProducer> timelineProducer;
@property (retain, nonatomic) id<PXStoryStyleProducer> styleProducer;
@property (retain, nonatomic) id<PXStoryRelatedProducer> relatedProducer;
@property (weak, nonatomic) NSObject<PXAnonymousViewController> *presentingViewController;
@property (weak, nonatomic) id<PXAssetCollectionActionPerformerDelegate> assetCollectionActionPerformerDelegate;
@property (weak, nonatomic) id<PXTapToRadarDiagnosticProvider> containerTapToRadarDiagnosticsProvider;
@property (nonatomic) unsigned long long options;
@property (readonly, nonatomic) BOOL isAppleMusicPreview;
@property (readonly, nonatomic) BOOL isPresentedForAirPlay;
@property (readonly, nonatomic) BOOL isExportPreview;
@property (readonly, nonatomic) BOOL isRelated;
@property (readonly, nonatomic) BOOL shouldDismissAtEnd;
@property (nonatomic) long long initialViewMode;
@property (readonly, nonatomic) id<PXStoryErrorReporter> errorReporter;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAssets:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAssetCollection:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAssetCollection:(id)a0 keyAsset:(id)a1;
- (id)initWithPersistableRecipe:(id)a0;
- (id)initWithAssetCollection:(id)a0 keyAsset:(id)a1 referencePersons:(id)a2;
- (id)initWithAssets:(id)a0 keyAsset:(id)a1 persistableRecipe:(id)a2;
- (id)initWithAssetCollection:(id)a0 assets:(id)a1 keyAsset:(id)a2 referencePersons:(id)a3 persistableRecipe:(id)a4 musicCurationProvider:(id)a5 errorRepository:(id)a6 queue:(id)a7 parentConfiguration:(id)a8;
- (id)copyWithAdditionalOptions:(unsigned long long)a0;
- (id)copyWithStoryQueue:(id)a0;
- (id)copyWithParentConfiguration:(id)a0;
- (void)_copyPropertiesFromConfiguration:(id)a0;
- (id)copyWithAssetCollection:(id)a0;
- (id)copyForMusicPreviewWithCuratedSongs:(id)a0;

@end
