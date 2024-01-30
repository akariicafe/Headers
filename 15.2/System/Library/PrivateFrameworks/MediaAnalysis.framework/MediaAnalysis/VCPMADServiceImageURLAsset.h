@class NSString, NSArray, NSURL, NSData;

@interface VCPMADServiceImageURLAsset : VCPMADServiceImageAsset {
    NSURL *_url;
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _pixelBuffer;
    unsigned int _orientation;
    NSString *_identifier;
    NSArray *_documentObservations;
    BOOL _hasCachedParseData;
    NSData *_cachedParseData;
}

- (id)identifier;
- (void)setDocumentObservations:(id)a0;
- (void)setCachedParseData:(id)a0;
- (void).cxx_destruct;
- (id)documentObservations;
- (id)cachedParseData;
- (BOOL)hasCachedParseData;
- (id).cxx_construct;
- (int)loadPixelBuffer:(struct __CVBuffer **)a0 orientation:(unsigned int *)a1;
- (id)initWithURL:(id)a0 identifier:(id)a1 clientBundleID:(id)a2 clientTeamID:(id)a3;

@end
