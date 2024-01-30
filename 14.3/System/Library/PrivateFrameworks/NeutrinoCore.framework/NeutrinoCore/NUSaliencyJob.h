@class NUSaliencyRequest, VNSaliencyImageObservation;

@interface NUSaliencyJob : NURenderJob

@property (readonly, nonatomic) NUSaliencyRequest *saliencyRequest;
@property (retain, nonatomic) VNSaliencyImageObservation *saliencyObservation;

- (id)initWithRequest:(id)a0;
- (id)result;
- (void).cxx_destruct;
- (BOOL)render:(out id *)a0;
- (void)cleanUp;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (id)scalePolicy;
- (id)initWithSaliencyRequest:(id)a0;
- (id)saliencyObservationForImage:(id)a0 error:(out id *)a1;

@end
