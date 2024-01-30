@class NSArray, NSString, PHImageRequestBehaviorSpec;
@protocol PHResourceChooserAsset;

@interface PHImageResourceChooserRequestInfo : NSObject

@property (readonly, nonatomic) id<PHResourceChooserAsset> asset;
@property (readonly, nonatomic) struct CGSize { double width; double height; } desiredSize;
@property (readonly, nonatomic) float requestedScale;
@property (readonly, nonatomic) NSArray *allowedResourceVersions;
@property (readonly, nonatomic) PHImageRequestBehaviorSpec *behaviorSpec;
@property (readonly, nonatomic) BOOL isCloudShared;
@property (readonly, nonatomic) double fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable;
@property (copy, nonatomic) NSString *loggingPrefix;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 requestedScale:(float)a2 allowedResourceVersions:(id)a3 behaviorSpec:(id)a4 cloudSharedMode:(BOOL)a5 fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable:(double)a6 loggingPrefix:(id)a7;

@end
