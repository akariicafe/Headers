@class NSNumber;

@interface _PIParallaxClockMaterialJob : NURenderJob

@property (retain, nonatomic) NSNumber *luminanceValue;

- (id)result;
- (void).cxx_destruct;
- (BOOL)render:(out id *)a0;
- (id)clockMaterialRequest;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)wantsRenderStage;

@end
