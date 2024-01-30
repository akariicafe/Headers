@class NSString;
@protocol NURenderStatistics;

@interface _NUClassifyPipelineImageCorrectionResult : _NURenderResult <NUClassifyPipelineImageCorrectionResult>

@property float confidence;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
