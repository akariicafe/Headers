@class NSString, UILabel, NSLayoutConstraint, PKInk;
@protocol PKPaletteInkingTool, PKPaletteErasingTool;

@interface PKPaletteHandwritingToolView : PKPaletteToolView <PKPaletteInkingTool>

@property (retain, nonatomic) UILabel *toolLabel;
@property (retain, nonatomic) NSLayoutConstraint *toolLabelCenterXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toolLabelCenterYConstraint;
@property (nonatomic) BOOL needsUpdateTitleLabel;
@property (copy, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) PKInk *ink;
@property (readonly, nonatomic) NSString *toolIdentifier;
@property (readonly, nonatomic) id<PKPaletteInkingTool> inkingTool;
@property (readonly, nonatomic) id<PKPaletteErasingTool> erasingTool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_updateUI;
- (void)setScalingFactor:(double)a0;
- (void)setInkColor:(id)a0;
- (void)setEdgeLocation:(unsigned long long)a0;
- (void)setInkWeight:(double)a0;
- (id)initWithToolIdentifier:(id)a0;
- (BOOL)isHandwritingTool;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_toolLabelImageViewTransform;
- (id)_toolLabelText;
- (struct CGPoint { double x0; double x1; })_toolLabelCenterOffset;

@end
