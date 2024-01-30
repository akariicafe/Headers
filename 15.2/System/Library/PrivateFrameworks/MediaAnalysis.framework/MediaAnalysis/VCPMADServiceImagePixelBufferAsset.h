@class NSString, NSArray, NSData;

@interface VCPMADServiceImagePixelBufferAsset : VCPMADServiceImageAsset {
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
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 andIdentifier:(id)a2 clientBundleID:(id)a3 clientTeamID:(id)a4;
- (BOOL)hasCachedParseData;
- (id).cxx_construct;
- (int)loadPixelBuffer:(struct __CVBuffer **)a0 orientation:(unsigned int *)a1;

@end
