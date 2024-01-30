@class NSString;

@interface SNSoundDetector : SNDetectorHead <SNAnalyzing>

@property (readonly, nonatomic) struct Box { } *resultsBox;
@property (readonly, nonatomic) struct shared_ptr<DSPGraph::Graph> { } graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)detectorConfigurationWithLogMelBasedFeatureExtractor:(id)a0 detectorHead:(id)a1 detectorIdentifier:(id)a2 soundIdentifier:(id)a3;
+ (id)detectorHeadConfigurationForDetectorIdentifier:(id)a0 soundIdentifier:(id)a1 modelConfiguration:(id)a2;
+ (id)detectorConfigurationWithAudioBasedFeatureExtractor:(id)a0 detectorHead:(id)a1 detectorIdentifier:(id)a2;
+ (id)detectorHeadConfigurationForDetectorVariant:(id)a0 soundIdentifier:(id)a1 modelConfiguration:(id)a2;

- (id)initWithDetectorVariant:(id)a0 soundIdentifier:(id)a1 modelConfiguration:(id)a2;

@end
