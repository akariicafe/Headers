@protocol PLVideoChoosingAssetInformation, PLVideoChoosingOptions, PLVideoResourceContext;

@interface PLVideoChoosingAndAvailabilitySupport : NSObject

@property (readonly, nonatomic) id<PLVideoResourceContext> context;
@property (readonly, nonatomic) id<PLVideoChoosingAssetInformation> assetInformation;
@property (readonly, nonatomic) id<PLVideoChoosingOptions> options;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

- (void).cxx_destruct;
- (id)chooseResourceDownloadRequired:(BOOL *)a0 error:(id *)a1;
- (id)initWithContext:(id)a0 assetInformation:(id)a1 options:(id)a2 size:(struct CGSize { double x0; double x1; })a3;
- (id)_acceptableResourceVersions;
- (unsigned int)_videoQualityLevelForRequest;
- (id)_ensureOriginalsAreHighestQuality:(id)a0;
- (id)_chooseResourceDownloadRequired:(BOOL *)a0 error:(id *)a1;

@end
