@class NSString, NSArray, NSData, CLLocation;

@interface VCPMADServiceImageAsset : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *clientBundleID;
@property (readonly, nonatomic) NSString *clientTeamID;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) BOOL isScreenshot;
@property (readonly, nonatomic) NSArray *faces;
@property (readonly, nonatomic) NSArray *nsfwClassifications;
@property (copy, nonatomic) NSArray *documentObservations;
@property (copy, nonatomic) NSArray *barcodeObservations;
@property (readonly, nonatomic) BOOL hasCachedParseData;
@property (copy, nonatomic) NSData *cachedParseData;
@property (retain, nonatomic) NSString *signpostPayload;

+ (id)assetWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 identifier:(id)a2 clientBundleID:(id)a3 clientTeamID:(id)a4;
+ (id)assetWithURL:(id)a0 identifier:(id)a1 clientBundleID:(id)a2 clientTeamID:(id)a3;
+ (id)assetWithPhotosAsset:(id)a0 clientBundleID:(id)a1 clientTeamID:(id)a2;
+ (id)assetWithPhotosAsset:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 orientation:(unsigned int)a2 clientBundleID:(id)a3 clientTeamID:(id)a4;

- (void).cxx_destruct;
- (int)loadPixelBuffer:(struct __CVBuffer **)a0 orientation:(unsigned int *)a1;
- (id)vcp_textAnnotation;
- (id)vcp_annotation:(BOOL)a0;
- (id)initWithClientBundleID:(id)a0 andClientTeamID:(id)a1;

@end
