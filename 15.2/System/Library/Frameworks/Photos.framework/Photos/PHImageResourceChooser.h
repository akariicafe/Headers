@class PHResourceChooserList, NSString, PHResourceChooserListResourceInfo, PHImageRequestBehaviorSpec;
@protocol PHResourceChooserAsset;

@interface PHImageResourceChooser : NSObject {
    id<PHResourceChooserAsset> _asset;
    PHResourceChooserList *_list;
    double _requiredScale;
    PHResourceChooserListResourceInfo *_fallbackInfo;
    BOOL _didCheckForLocalVideoKeyFrame;
    BOOL _hasLocalVideoKeyFrameInNonHintResources;
    BOOL _needsReset;
}

@property (nonatomic) struct CGSize { double width; double height; } desiredSize;
@property (nonatomic) double fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable;
@property (nonatomic) BOOL allowHints;
@property (nonatomic) BOOL isCloudSharedMode;
@property (retain, nonatomic) PHImageRequestBehaviorSpec *behaviorSpec;
@property (copy, nonatomic) id /* block */ resourceHandler;
@property (weak, nonatomic) id context;
@property (retain, nonatomic) NSString *loggingPrefix;

+ (void)initialize;
+ (unsigned long long)_chooserSourceOptionsFromBehaviorSpec:(id)a0 allowHints:(BOOL)a1;
+ (id)_bagFromInfo:(id)a0 asset:(id)a1 behaviorSpec:(id)a2 requiredScale:(double)a3 bagVendor:(id)a4;
+ (id)_resourceVersionsFromImageRequestVersion:(long long)a0 assetHasAdjustments:(BOOL)a1;

- (void)_reset;
- (id)initWithAsset:(id)a0 resourceHandler:(id /* block */)a1;
- (void)moveFirst;
- (void).cxx_destruct;
- (id)_requestInfo;
- (id)initWithChooserList:(id)a0 asset:(id)a1 resourceHandler:(id /* block */)a2;
- (BOOL)_resourceInfoPassesTestForImageDerivativeOfVideo:(id)a0;
- (void)presentNextQualifyingResource;
- (void)_updateCachedGeometry;
- (Class)_policyHandlerClassForCurrentPolicy;
- (void)reset;

@end
