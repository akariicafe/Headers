@class AXMTraitDetectorNode, AXMSceneDetectorNode, AXMProminentObjectsDetectorNode, AXMCaptionDetectorNode, AXMNSFWDetectorNode, AXMSignificantEventDetectorNode, AXMFaceDetectorNode;

@interface AXMVoiceOverVisionEngine : AXMAXElementVisionEngine

@property (weak, nonatomic) AXMSceneDetectorNode *sceneDetector;
@property (weak, nonatomic) AXMFaceDetectorNode *faceDetector;
@property (weak, nonatomic) AXMTraitDetectorNode *traitDetector;
@property (weak, nonatomic) AXMProminentObjectsDetectorNode *prominentObjectsDetector;
@property (weak, nonatomic) AXMCaptionDetectorNode *captionDetector;
@property (weak, nonatomic) AXMNSFWDetectorNode *nsfwDetector;
@property (weak, nonatomic) AXMSignificantEventDetectorNode *significantEventDetector;
@property (nonatomic) unsigned long long genderStrategy;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)configuredOptionsDisableAllDetectors:(id /* block */)a0 elementOptions:(unsigned int)a1 textRecognitionLevel:(id /* block */)a2 textDetectionLocales:(id /* block */)a3 preferringFullCaptions:(BOOL)a4;

@end
