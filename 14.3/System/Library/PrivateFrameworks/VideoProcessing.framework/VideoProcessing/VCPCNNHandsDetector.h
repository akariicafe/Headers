@interface VCPCNNHandsDetector : NSObject {
    int cnnInputWidth;
    int cnnInputHeight;
}

+ (id)detector:(int)a0 forceCPU:(BOOL)a1 sharedModel:(BOOL)a2 inputConfig:(id)a3;

- (int)createInput:(float *)a0 withBuffer:(struct __CVBuffer { } *)a1 cnnInputHeight:(int)a2 cnnInputWidth:(int)a3;
- (float *)getInputBuffer:(int)a0 srcWidth:(int)a1 cnnInputHeight:(int *)a2 cnnInputWidth:(int *)a3;
- (int)retrieveBoxes:(float *)a0 outHeight:(int)a1 outWidth:(int)a2 boxes:(id)a3 anchorBox:(float[3][2])a4;
- (void)nonMaxSuppression:(id)a0;
- (int)drawLine:(char *)a0 width:(int)a1 height:(int)a2 stride:(int)a3 point0:(struct CGPoint { double x0; double x1; })a4 point1:(struct CGPoint { double x0; double x1; })a5 drawPoint:(int)a6;
- (int)generateHandsBoxes:(id)a0;
- (int)generateHandsRegions:(const struct vector<espresso_buffer_t, std::__1::allocator<espresso_buffer_t> > { struct *x0; struct *x1; struct __compressed_pair<espresso_buffer_t *, std::__1::allocator<espresso_buffer_t> > { struct *x0; } x2; } *)a0 boxes:(id)a1 maxNumRegions:(int)a2;
- (int)drawRectangle:(char *)a0 width:(int)a1 height:(int)a2 stride:(int)a3 keypoints:(struct CGPoint { double x0; double x1; } *)a4;
- (int)copyImage:(struct __CVBuffer { } *)a0 toData:(float *)a1;
- (int)handsDetectionGFT:(struct __CVBuffer { } *)a0 handsRegions:(id)a1 cancel:(id /* block */)a2;
- (int)updateModelWithResConfig:(id)a0;
- (int)handsDetection:(struct __CVBuffer { } *)a0 handsRegions:(id)a1 cancel:(id /* block */)a2;

@end
