@interface VCPCNNBlurAnalyzer : VCPImageAnalyzer {
    unsigned long long _revision;
}

@property BOOL sdof;

+ (id)analyzer;
+ (id)analyzerWithRevision:(unsigned long long)a0;

- (id)init;
- (float)calculateScoreFromNetworkOutput:(float *)a0 outChannel:(int)a1 outHeight:(int)a2 outWidth:(int)a3 textureness:(char *)a4 contrast:(float)a5 imgWidth:(int)a6;
- (int)computeCNNBasedSharpness:(struct __CVBuffer { } *)a0 sharpnessScore:(float *)a1 textureScore:(float *)a2 contrast:(float)a3 cancel:(id /* block */)a4;
- (int)computeSharpnessScore:(float *)a0 textureness:(char *)a1 contrast:(float)a2 imgWidth:(int)a3 cancel:(id /* block */)a4;
- (void)copyBufferFrom:(char *)a0 fromStride:(long long)a1 toPtr:(float *)a2 toStride:(long long)a3 toWidth:(int)a4 toHeight:(int)a5;
- (float *)getInputBuffer:(int)a0 srcWidth:(int)a1 cnnInputHeight:(int *)a2 cnnInputWidth:(int *)a3;
- (unsigned long long)getRevision;
- (id)initWithRevision:(unsigned long long)a0;
- (int)prepareModelForSourceWidth:(int)a0 andSourceHeight:(int)a1;
- (int)scaleRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 ofImage:(struct __CVBuffer { } *)a1 toData:(float *)a2 withWidth:(int)a3 andHeight:(int)a4;

@end
