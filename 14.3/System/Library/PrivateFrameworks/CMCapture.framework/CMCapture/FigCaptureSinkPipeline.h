@class NSString, BWNodeOutput;

@interface FigCaptureSinkPipeline : FigCapturePipeline {
    BWNodeOutput *_upstreamOutput;
}

@property (readonly, nonatomic) NSString *sinkID;
@property (nonatomic) BOOL discardsSampleData;

- (void)setUpstreamOutput:(id)a0;
- (void)dealloc;
- (id)initWithGraph:(id)a0 name:(id)a1 sinkID:(id)a2;

@end
