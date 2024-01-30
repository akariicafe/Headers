@class NSURL, NSDictionary, NSMutableDictionary;

@interface TDVectorGlyphReader : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct CGSVGDocument { } *_svgDocument;
    NSURL *_fileURL;
    NSDictionary *_guideNodes;
    NSDictionary *_vectorGlyphNodes;
    NSMutableDictionary *_vectorGlyphWithWeightSize;
    double _sourcePointSize;
    double _defaultPointSize;
}

@property (readonly) float templateVersion;

+ (id)vectorGlyphReaderWithURL:(id)a0 platform:(long long)a1 error:(id *)a2;
+ (id)vectorGlyphReaderWithURL:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 platform:(long long)a1 error:(id *)a2;
- (BOOL)_commonInitWithData:(id)a0 platform:(long long)a1 error:(id *)a2;
- (id)initWithData:(id)a0 platform:(long long)a1 error:(id *)a2;
- (BOOL)_readSVGNodesError:(id *)a0;
- (BOOL)_validateVectorGlyphsWithError:(id *)a0;
- (id)_caplineNodeIDForGlyphSize:(long long)a0;
- (id)_baselineNodeIDForGlyphSize:(long long)a0;
- (id)_glyphNodeIDForWeight:(long long)a0 size:(long long)a1;
- (double)defaultPointSize;
- (double)_sourcePointSize;
- (unsigned long long)numberOfVectorGlyphs;
- (struct CGSVGDocument { } *)vectorGlyphWithWeight:(long long)a0 size:(long long)a1 error:(id *)a2;
- (BOOL)vectorGlyphExistsWithWeight:(long long)a0 size:(long long)a1 error:(id *)a2;
- (double)baselineForVectorGlyphWithWeight:(long long)a0 size:(long long)a1;
- (double)capHeightForVectorGlyphWithWeight:(long long)a0 size:(long long)a1;
- (struct { double x0; double x1; double x2; double x3; })alignmentRectInsetsForVectorGlyphWithWeight:(long long)a0 size:(long long)a1;

@end
