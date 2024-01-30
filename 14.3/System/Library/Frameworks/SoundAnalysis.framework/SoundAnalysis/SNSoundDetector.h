@class NSString;

@interface SNSoundDetector : SNDetectorHead <SNAnalyzing>

@property (readonly, nonatomic) struct Box { } *resultsBox;
@property (readonly, nonatomic) struct shared_ptr<DSPGraph::Graph> { } graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)detectorConfigurationWithLogMelBasedFeatureExtractor:(id)a0 detectorHead:(id)a1 soundIdentifier:(id)a2;
+ (id)vggishDetectorConfigurationWithSoundIdentifier:(id)a0;
+ (id)soundPrint100kDetectorConfigurationWithSoundIdentifier:(id)a0;
+ (id)detectorHeadConfigurationForSoundIdentifier:(id)a0 analysisPassStrategy:(long long)a1;

- (id)initWithVGGishBasedMLModel:(id)a0 soundIdentifier:(id)a1;
- (id)initWithSoundIdentifier:(id)a0 analysisPassStrategy:(long long)a1;

@end
