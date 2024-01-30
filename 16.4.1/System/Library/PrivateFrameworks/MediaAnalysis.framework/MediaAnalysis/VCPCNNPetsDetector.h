@interface VCPCNNPetsDetector : NSObject

+ (id)detector:(int)a0;

- (int)copyImage:(struct __CVBuffer { } *)a0 toData:(float *)a1 withChannels:(int)a2;
- (int)createInput:(float *)a0 withBuffer:(struct __CVBuffer { } *)a1 cnnInputHeight:(int)a2 cnnInputWidth:(int)a3;
- (int)createModel:(int)a0 srcWidth:(int)a1;
- (int)generatePetsBoxes:(id)a0 faceBoxes:(id)a1 cancel:(id /* block */)a2;
- (int)generatePetsRegions:(float *)a0 outHeight:(int)a1 outWidth:(int)a2 boxes:(id)a3 faceBoxes:(id)a4 maxNumRegions:(int)a5;
- (float *)getInputBuffer:(int)a0 srcWidth:(int)a1 cnnInputHeight:(int *)a2 cnnInputWidth:(int *)a3;
- (void)nonMaxSuppression:(id)a0;
- (int)petsDetection:(struct __CVBuffer { } *)a0 petsRegions:(id)a1 petsFaceRegions:(id)a2 cancel:(id /* block */)a3;
- (int)postProcBoxes:(id)a0 maxNumRegions:(int)a1;

@end
