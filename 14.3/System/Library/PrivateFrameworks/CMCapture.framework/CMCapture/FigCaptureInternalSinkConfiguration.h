@interface FigCaptureInternalSinkConfiguration : FigCaptureSinkConfiguration

@property (readonly, nonatomic) int subType;

- (int)sinkType;
- (id)initWithSinkSubType:(int)a0;

@end
