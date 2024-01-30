@class CAShapeLayer, CALayer, NSMutableArray, CATextLayer;

@interface CRAlignmentLayer : CALayer

@property (retain) CAShapeLayer *maskLayer;
@property (retain) CAShapeLayer *outlineLayer;
@property (retain) CALayer *infoLayer;
@property (retain) NSMutableArray *cardNumberLayers;
@property (nonatomic) struct CGPoint { double x; double y; } cardNumberHorizontalDefaultPos;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cardNumberHorizontalDefaultBounds;
@property (retain) CATextLayer *cardholderNameLayer;
@property (retain) CATextLayer *expirationDateLayer;
@property (retain) CATextLayer *instructionLayer;

+ (id)layer;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRect;
- (void)makeTextLayer:(id)a0 matchWidthOfText:(id)a1;
- (struct CGPoint { double x0; double x1; })pointOnInfoLayerForPointOnCard:(struct CGPoint { double x0; double x1; })a0;
- (void)animateFoundCardRect:(id)a0;
- (void)animateFoundCodeParts:(id)a0 codePartPositions:(id)a1 codeFrameIndex:(unsigned long long)a2 cardHolder:(id)a3 cardholderPosition:(struct CGPoint { double x0; double x1; })a4 cardholderFrameIndex:(unsigned long long)a5 expDate:(id)a6 expdatePosition:(struct CGPoint { double x0; double x1; })a7 expDateFrameIndex:(unsigned long long)a8 completionBlock:(id /* block */)a9;
- (void)fadePlacementImage;
- (void)propogateMaskColor:(id)a0 outlineColor:(id)a1 placementTextColor:(id)a2 capturedTextColor:(id)a3;
- (void)resetLayer;

@end
