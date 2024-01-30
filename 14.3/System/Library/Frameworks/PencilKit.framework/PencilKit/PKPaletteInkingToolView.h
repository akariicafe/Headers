@class PKPaletteAttributeViewController, NSString, UIImageView, UIImage, UILabel, NSLayoutConstraint, PKInk;
@protocol PKPaletteInkingTool, PKPaletteErasingTool;

@interface PKPaletteInkingToolView : PKPaletteToolView <PKPaletteInkingTool, PKInkAttributesPickerDelegate> {
    PKPaletteAttributeViewController *_attributeViewController;
}

@property (retain, nonatomic) PKInk *ink;
@property (retain, nonatomic) UIImageView *colorIndicatorImageView;
@property (retain, nonatomic) UIImage *colorIndicatorImageUp;
@property (retain, nonatomic) UIImage *colorIndicatorImageRight;
@property (retain, nonatomic) UIImage *colorIndicatorImageLeft;
@property (retain, nonatomic) UIImageView *colorIndicatorContourImageView;
@property (retain, nonatomic) UIImage *colorIndicatorContourImageUp;
@property (retain, nonatomic) UIImage *colorIndicatorContourImageRight;
@property (retain, nonatomic) UIImage *colorIndicatorContourImageLeft;
@property (retain, nonatomic) UIImageView *tipIndicatorImageView;
@property (retain, nonatomic) UIImage *toolTipImageUp;
@property (retain, nonatomic) UIImage *toolTipImageRight;
@property (retain, nonatomic) UIImage *toolTipImageLeft;
@property (retain, nonatomic) UIImageView *tipIndicatorContourImageView;
@property (retain, nonatomic) UIImage *toolTipContourImageUp;
@property (retain, nonatomic) UIImage *toolTipContourImageRight;
@property (retain, nonatomic) UIImage *toolTipContourImageLeft;
@property (retain, nonatomic) UILabel *opacityLabel;
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelCenterXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelCenterYConstraint;
@property (readonly, nonatomic) NSString *toolIdentifier;
@property (readonly, nonatomic) id<PKPaletteInkingTool> inkingTool;
@property (readonly, nonatomic) id<PKPaletteErasingTool> erasingTool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultColorForInkingToolWithIdentifier:(id)a0;

- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setScalingFactor:(double)a0;
- (void)layoutSubviews;
- (id)_uiColor;
- (void)setInkColor:(id)a0;
- (void)setEdgeLocation:(unsigned long long)a0;
- (void)setInkWeight:(double)a0;
- (void)inkAttributesPickerDidChangeInkThickness:(id)a0;
- (void)inkAttributesPickerDidChangeInkOpacity:(id)a0;
- (long long)_uiColorUserInterfaceStyle;
- (id)initWithToolIdentifier:(id)a0 toolProperties:(id)a1;
- (id)initWithToolIdentifier:(id)a0;
- (void)_setToolProperties:(id)a0 toolIdentifier:(id)a1;
- (id)_opacityLabelFont;
- (void)_updateOpacityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_colorIndicatorImageViewFrame;
- (void)_updateToolColorBandAndTipImageViews;
- (id)_toolColorIndicatorImageForCurrentEdgeLocation;
- (id)_toolColorIndicatorContourImageForCurrentEdgeLocation;
- (id)_toolTipImageForCurrentEdgeLocation;
- (id)_toolTipContourImageForCurrentEdgeLocation;
- (void)_reloadToolImage;
- (double)_minimumAllowedInkOpacity;
- (void)setToolProperties:(id)a0;
- (id)toolProperties;
- (id)attributeViewController;

@end
