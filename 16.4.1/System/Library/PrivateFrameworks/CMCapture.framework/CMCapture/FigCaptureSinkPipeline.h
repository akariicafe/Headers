@class NSString, BWNodeOutput;

@interface FigCaptureSinkPipeline : FigCapturePipeline {
    BWNodeOutput *_upstreamOutput;
}

@property (readonly, nonatomic) NSString *sinkID;
@property (nonatomic) BOOL discardsSampleData;

- (void)dealloc;
- (id)initWithGraph:(id)a0 name:(id)a1 sinkID:(id)a2;
- (void)setUpstreamOutput:(id)a0;

@end
