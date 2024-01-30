@interface _MLVNFrameworkHandle : NSObject

@property (readonly, nonatomic) void /* function */ *scenePrintsFromPixelBuffersImpl;
@property (readonly, nonatomic) void /* function */ *scenePrintsFromPixelBuffersUsesCPUOnlyImpl;
@property (readonly, nonatomic) void /* function */ *scenePrintElementCountImpl;
@property (readonly, nonatomic) void /* function */ *scenePrintLengthImpl;
@property (readonly, nonatomic) Class VNImageBufferClass;
@property (readonly, nonatomic) void /* function */ *detectionPrintsFromPixelBuffersImpl;
@property (readonly, nonatomic) void /* function */ *detectionPrintsFromPixelBuffersUsesCPUOnlyImpl;
@property (readonly, nonatomic) void /* function */ *detectionPrintShapesImpl;
@property (readonly, nonatomic) void /* function */ *detectionPrintSupportedRevisionsImpl;
@property (readonly, nonatomic, getter=isValid) BOOL validForSceneprint;
@property (readonly, nonatomic, getter=isValid) BOOL validForObjectprint;

+ (id)addOrientation:(unsigned int)a0 toOptions:(id)a1;
+ (id)sharedHandle;

- (id)init;
- (void).cxx_destruct;
- (struct __CVBuffer { } *)createPixelBufferFromCGImage:(struct CGImage { } *)a0 constraint:(id)a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 cropAndScaleOption:(unsigned long long)a3 options:(id)a4 error:(id *)a5;
- (struct __CVBuffer { } *)createPixelBufferFromImageAtURL:(id)a0 constraint:(id)a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 cropAndScaleOption:(unsigned long long)a3 options:(id)a4 error:(id *)a5;
- (struct __CVBuffer { } *)createPixelBufferFromVNImageBuffer:(id)a0 constraint:(id)a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 cropAndScaleOption:(unsigned long long)a3 options:(id)a4 error:(id *)a5;
- (id)detectionPrintShapes:(unsigned long long)a0;
- (id)detectionPrintSupportedRevisions;
- (id)detectionPrintsFromPixelBuffers:(struct __CVBuffer { } *)a0 version:(unsigned long long)a1 augmentationOptions:(id)a2 useCPUOnly:(BOOL)a3 error:(id *)a4;
- (unsigned long long)elementCountForScenePrintRequestRevision:(unsigned long long)a0;
- (unsigned long long)lengthInBytesForScenePrintRequestRevision:(unsigned long long)a0;
- (id)scenePrintsFromPixelBuffers:(struct __CVBuffer { } *)a0 version:(unsigned long long)a1 augmentationOptions:(id)a2 useCPUOnly:(BOOL)a3 error:(id *)a4;

@end
