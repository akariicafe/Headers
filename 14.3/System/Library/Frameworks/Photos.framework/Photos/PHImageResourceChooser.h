@class NSString, PHResourceChooserList, PHImageRequestBehaviorSpec;
@protocol PHResourceChooserAsset;

@interface PHImageResourceChooser : NSObject {
    double _requiredScale;
    PHResourceChooserList *_list;
    BOOL _needsReset;
    BOOL _didCheckForLocalVideoKeyFrame;
    BOOL _hasLocalVideoKeyFrameInNonHintResources;
}

@property (readonly, nonatomic) id<PHResourceChooserAsset> asset;
@property (nonatomic) struct CGSize { double width; double height; } desiredSize;
@property (nonatomic) BOOL isCloudSharedMode;
@property (retain, nonatomic) PHImageRequestBehaviorSpec *behaviorSpec;
@property (readonly, nonatomic) long long policy;
@property (readonly, nonatomic) unsigned long long loadingOptions;
@property (readonly, nonatomic) long long requestVersion;
@property (readonly, nonatomic) double minimumTableThumbnailLongSide;
@property (readonly, nonatomic) BOOL onlyUseFetchedAssetPropertiesDuringChoosing;
@property (nonatomic) BOOL allowHints;
@property (weak, nonatomic) id context;
@property (retain, nonatomic) NSString *loggingPrefix;
@property (copy, nonatomic) id /* block */ resourceHandler;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)_executeEndOfListHandlerWithResourceChooserList:(id)a0 continueInReverse:(BOOL *)a1;
- (id)initWithAsset:(id)a0;
- (void)presentNextQualifyingResource;
- (void)moveFirst;
- (BOOL)_executeItemHandlerWithAllowedResourceVersions:(id)a0 approximateSize:(struct CGSize { double x0; double x1; })a1 resourceScale:(float)a2 isPrimaryFormat:(BOOL)a3 isDefaultOrientation:(BOOL)a4 resourceType:(unsigned int)a5 version:(unsigned int)a6 isDerivative:(BOOL)a7 store:(id)a8 key:(id)a9 localAvailabilityTarget:(short)a10 identity:(id)a11 canDownload:(BOOL)a12 isReverse:(BOOL)a13 preventAutoAdvance:(BOOL *)a14;

@end
