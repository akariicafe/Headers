@class AXMNSFWDetectorNode, AXMObjectDetectorNode, AXMProminentObjectsDetectorNode, AXMCaptionDetectorNode, AXMFaceDetectorNode, AXMSignificantEventDetectorNode, AXMSceneDetectorNode, AXMTraitDetectorNode;

@interface AXMVoiceOverVisionEngine : AXMAXElementVisionEngine

@property (weak, nonatomic) AXMSceneDetectorNode *sceneDetector;
@property (weak, nonatomic) AXMObjectDetectorNode *objectDetector;
@property (weak, nonatomic) AXMFaceDetectorNode *faceDetector;
@property (weak, nonatomic) AXMTraitDetectorNode *traitDetector;
@property (weak, nonatomic) AXMProminentObjectsDetectorNode *prominentObjectsDetector;
@property (weak, nonatomic) AXMCaptionDetectorNode *captionDetector;
@property (weak, nonatomic) AXMNSFWDetectorNode *nsfwDetector;
@property (weak, nonatomic) AXMSignificantEventDetectorNode *significantEventDetector;
@property (nonatomic) unsigned long long genderStrategy;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)configuredOptionsDisableAllDetectors:(id /* block */)a0 elementOptions:(unsigned int)a1 textRecognitionLevel:(id /* block */)a2 textDetectionLocales:(id /* block */)a3 preferringFullCaptions:(BOOL)a4;

@end
