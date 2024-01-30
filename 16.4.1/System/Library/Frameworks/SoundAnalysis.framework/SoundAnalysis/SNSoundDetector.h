@class NSString;

@interface SNSoundDetector : SNDetectorHead <SNAnalyzing>

@property (readonly, nonatomic) struct Box { } *resultsBox;
@property (readonly, nonatomic) struct shared_ptr<DSPGraph::Graph> { } graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
