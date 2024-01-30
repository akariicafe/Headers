@class UILabel, NSString, NSLayoutConstraint;
@protocol PKPaletteInkingTool, PKPaletteHandwritingTool, PKPaletteErasingTool;

@interface PKPaletteHandwritingToolView : PKPaletteToolView <PKPaletteHandwritingTool>

@property (retain, nonatomic) UILabel *toolLabel;
@property (retain, nonatomic) NSLayoutConstraint *toolLabelCenterXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toolLabelCenterYConstraint;
@property (nonatomic) BOOL needsUpdateTitleLabel;
@property (copy, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) NSString *toolIdentifier;
@property (readonly, nonatomic) id<PKPaletteInkingTool> inkingTool;
@property (readonly, nonatomic) id<PKPaletteErasingTool> erasingTool;
@property (readonly, nonatomic) id<PKPaletteHandwritingTool> handwritingTool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateUI;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)init;
- (void)setScalingFactor:(double)a0;
- (void)setEdgeLocation:(unsigned long long)a0;
- (id)initWithToolIdentifier:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_toolLabelImageViewTransform;
- (id)_toolLabelText;
- (struct CGPoint { double x0; double x1; })_toolLabelCenterOffset;

@end
