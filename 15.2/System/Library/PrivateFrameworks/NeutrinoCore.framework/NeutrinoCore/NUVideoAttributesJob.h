@class NUVideoAttributes;

@interface NUVideoAttributesJob : NURenderJob

@property (retain, nonatomic) NUVideoAttributes *videoAttributes;

- (void).cxx_destruct;
- (id)result;
- (BOOL)prepare:(out id *)a0;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsRenderStage;
- (BOOL)wantsCompleteStage;

@end
