@class NUVisionDetectionRequest, NSArray;

@interface NUVisionDetectionJob : NURenderJob

@property (readonly, nonatomic) NUVisionDetectionRequest *detectionRequest;
@property (copy, nonatomic) NSArray *observations;

- (id)initWithRequest:(id)a0;
- (BOOL)render:(out id *)a0;
- (void)cleanUp;
- (void).cxx_destruct;
- (id)result;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputImage;
- (id)scalePolicy;
- (id)initWithVisionDetectionRequest:(id)a0;

@end
