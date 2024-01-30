@class NSString, NSArray, NSData, CLLocation;

@interface VCPMADServiceImageAsset : NSObject

@property (readonly, nonatomic) BOOL hasValidSceneProcessing;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *clientBundleID;
@property (readonly, nonatomic) NSString *clientTeamID;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) BOOL isScreenshot;
@property (readonly, nonatomic) NSArray *faces;
@property (readonly, nonatomic) NSArray *nsfwClassifications;
@property (readonly, nonatomic) NSArray *scenenetClassifications;
@property (copy, nonatomic) NSArray *documentObservations;
@property (copy, nonatomic) NSArray *barcodeObservations;
@property (readonly, nonatomic) BOOL hasCachedParseData;
@property (copy, nonatomic) NSData *cachedParseData;
@property (retain, nonatomic) NSString *signpostPayload;
@property (readonly, nonatomic) struct CGSize { double width; double height; } resolution;
@property (readonly, nonatomic) unsigned int orientation;
@property (readonly, nonatomic) BOOL isHighResDecoded;
@property (readonly, nonatomic) BOOL isSensitive;

+ (id)assetWithImageData:(id)a0 uniformTypeIdentifier:(id)a1 identifier:(id)a2 clientBundleID:(id)a3 clientTeamID:(id)a4;
+ (id)assetWithPhotosAsset:(id)a0 clientBundleID:(id)a1 clientTeamID:(id)a2;
+ (id)assetWithPhotosAsset:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 orientation:(unsigned int)a2 clientBundleID:(id)a3 clientTeamID:(id)a4;
+ (id)assetWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 identifier:(id)a2 clientBundleID:(id)a3 clientTeamID:(id)a4;
+ (id)assetWithURL:(id)a0 identifier:(id)a1 clientBundleID:(id)a2 clientTeamID:(id)a3;

- (void).cxx_destruct;
- (id)initWithClientBundleID:(id)a0 andClientTeamID:(id)a1;
- (int)loadHighResPixelBuffer:(struct __CVBuffer **)a0 orientation:(unsigned int *)a1;
- (int)loadPixelBuffer:(struct __CVBuffer **)a0 orientation:(unsigned int *)a1;
- (void)setCachedParseData:(id)a0 overwriteExisting:(BOOL)a1;
- (id)vcp_annotationWithTypes:(unsigned long long)a0;
- (id)vcp_scenenetAnnotation;
- (id)vcp_textAnnotation;

@end
