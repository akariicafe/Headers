@class NSArray, NUSubjectDetectionRequest;

@interface NUSubjectDetectionJob : NURenderJob

@property (readonly, nonatomic) NUSubjectDetectionRequest *subjectDetectionRequest;
@property (copy, nonatomic) NSArray *observations;

- (id)initWithRequest:(id)a0;
- (id)result;
- (void).cxx_destruct;
- (BOOL)render:(out id *)a0;
- (void)cleanUp;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (id)scalePolicy;
- (id)initWithSubjectDetectionRequest:(id)a0;
- (id)subjectsInImage:(id)a0 error:(out id *)a1;

@end
