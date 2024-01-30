@class FigCaptureMovieFileSinkPipelineConfiguration, BWPipelineStage;

@interface FigCaptureMovieFileSinkMiddlePipelineConfiguration : NSObject

@property (retain, nonatomic) FigCaptureMovieFileSinkPipelineConfiguration *movieFileSinkPipelineConfiguration;
@property (retain, nonatomic) BWPipelineStage *movieFilePipelineStage;

- (id)init;
- (void)dealloc;

@end
