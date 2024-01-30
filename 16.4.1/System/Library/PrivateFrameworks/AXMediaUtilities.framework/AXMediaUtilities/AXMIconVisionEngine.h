@class AXMIconClassDetectorNode, AXMImageNode, AXMBrailleEdgesDetectorNode;

@interface AXMIconVisionEngine : AXMVisionEngine

@property (weak, nonatomic) AXMImageNode *imageNode;
@property (weak, nonatomic) AXMIconClassDetectorNode *iconClassDetector;
@property (weak, nonatomic) AXMBrailleEdgesDetectorNode *brailleEdgeDetector;

+ (id)sharedInstance;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)classifyImages:(id)a0 withTimeout:(double)a1;

@end
