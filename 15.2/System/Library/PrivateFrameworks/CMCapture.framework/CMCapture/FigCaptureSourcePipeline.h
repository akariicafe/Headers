@class NSString;

@interface FigCaptureSourcePipeline : FigCapturePipeline

@property (readonly, nonatomic) NSString *sourceID;

- (void)dealloc;
- (id)initWithGraph:(id)a0 name:(id)a1 sourceID:(id)a2;

@end
