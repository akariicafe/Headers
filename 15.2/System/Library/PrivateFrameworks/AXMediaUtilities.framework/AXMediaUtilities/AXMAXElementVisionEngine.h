@class AXMTextDetectorNode, AXMIconClassDetectorNode, AXMScreenCaptureNode, AXMImageNode, AXMBrailleEdgesDetectorNode, AXMAXElementDetectorNode;

@interface AXMAXElementVisionEngine : AXMVisionEngine

@property (weak, nonatomic) AXMScreenCaptureNode *captureNode;
@property (weak, nonatomic) AXMImageNode *imageNode;
@property (weak, nonatomic) AXMTextDetectorNode *textDetector;
@property (weak, nonatomic) AXMIconClassDetectorNode *iconClassDetector;
@property (weak, nonatomic) AXMBrailleEdgesDetectorNode *brailleEdgeDetector;
@property (weak, nonatomic) AXMAXElementDetectorNode *axElementDetector;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
