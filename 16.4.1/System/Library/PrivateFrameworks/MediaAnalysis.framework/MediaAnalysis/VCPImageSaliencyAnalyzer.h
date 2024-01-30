@interface VCPImageSaliencyAnalyzer : VCPImageAnalyzer {
    int _chunk;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _region[5];
    float _score[5];
    int _maxNumRegions;
    BOOL _prune;
}

+ (id)analyzerWith:(int)a0 prune:(BOOL)a1;

- (int)aggregateTileResults:(id)a0 tileRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 imageSize:(struct CGSize { double x0; double x1; })a2 landscape:(BOOL)a3 results:(id)a4;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (float)computeScore:(float *)a0 width:(int)a1 height:(int)a2 posX:(int)a3 posY:(int)a4;
- (int)copyImage:(struct __CVBuffer { } *)a0 toData:(float *)a1 withChunk:(int)a2;
- (int)generateSalientRegion:(float *)a0 outHeight:(int)a1 outWidth:(int)a2;
- (float *)getInputBuffer:(int)a0 srcWidth:(int)a1 cnnInputHeight:(int *)a2 cnnInputWidth:(int *)a3;
- (int)getSalientRegions:(id /* block */)a0;
- (id)initWithMaxNumRegions:(int)a0 prune:(BOOL)a1;
- (float)outputScaling;
- (int)prepareModelForSourceWidth:(int)a0 andSourceHeight:(int)a1;
- (int)processTile:(struct __CVBuffer { } *)a0 results:(id)a1 cancel:(id /* block */)a2;
- (id)pruneRegions:(id)a0;
- (int)saliencyDetection:(struct __CVBuffer { } *)a0 salientRegions:(id)a1 cancel:(id /* block */)a2;
- (int)scaleImage:(struct __CVBuffer { } *)a0 toData:(float *)a1 withWidth:(int)a2 andHeight:(int)a3;

@end
