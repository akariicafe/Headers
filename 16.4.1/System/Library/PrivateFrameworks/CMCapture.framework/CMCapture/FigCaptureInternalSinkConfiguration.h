@interface FigCaptureInternalSinkConfiguration : FigCaptureSinkConfiguration

@property (readonly, nonatomic) int subType;

- (id)initWithSinkSubType:(int)a0;
- (int)sinkType;

@end
