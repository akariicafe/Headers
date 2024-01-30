@class NSString, UILabel, NSLayoutConstraint, PKToolConfiguration;
@protocol PKPaletteInkingTool, PKPaletteHandwritingTool, PKPaletteErasingTool;

@interface PKPaletteHandwritingToolView : PKPaletteToolView <PKPaletteHandwritingTool>

@property (retain, nonatomic) UILabel *toolLabel;
@property (retain, nonatomic) NSLayoutConstraint *toolLabelCenterXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toolLabelCenterYConstraint;
@property (nonatomic) BOOL needsUpdateTitleLabel;
@property (copy, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) NSString *toolIdentifier;
@property (readonly, nonatomic) NSString *toolVariant;
@property (readonly, nonatomic) PKToolConfiguration *configuration;
@property (readonly, nonatomic) id<PKPaletteInkingTool> inkingTool;
@property (readonly, nonatomic) id<PKPaletteErasingTool> erasingTool;
@property (readonly, nonatomic) id<PKPaletteHandwritingTool> handwritingTool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
