@class NSArray, NSData, PHAsset, NSNumber;

@interface VCPMADServiceImagePhotosAsset : VCPMADServiceImageAsset {
    PHAsset *_asset;
    NSArray *_resources;
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _pixelBuffer;
    unsigned int _orientation;
    NSArray *_documentObservations;
    NSArray *_barcodeObservations;
    NSNumber *_hasCachedParseData;
    NSData *_cachedParseData;
}

- (id)initWithPhotosAsset:(id)a0 clientBundleID:(id)a1 clientTeamID:(id)a2;
- (id)identifier;
- (id)resources;
- (id)barcodeObservations;
- (id)thumbnailResource;
- (void)setBarcodeObservations:(id)a0;
- (id)initWithPhotosAsset:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 orientation:(unsigned int)a2 clientBundleID:(id)a3 clientTeamID:(id)a4;
- (id)nsfwClassifications;
- (void)persistOCRMRC;
- (void)setDocumentObservations:(id)a0;
- (void)setCachedParseData:(id)a0;
- (id)asset;
- (void).cxx_destruct;
- (id)documentObservations;
- (id)cachedParseData;
- (id)faces;
- (BOOL)hasCachedParseData;
- (BOOL)isScreenshot;
- (id).cxx_construct;
- (int)loadPixelBuffer:(struct __CVBuffer **)a0 orientation:(unsigned int *)a1;
- (id)location;

@end
