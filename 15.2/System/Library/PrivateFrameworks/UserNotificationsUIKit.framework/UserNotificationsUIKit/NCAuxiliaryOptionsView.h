@class NSStringDrawingContext, NSString, NSArray, UILabel, BSUIFontProvider, UIView;

@interface NCAuxiliaryOptionsView : UIView <NCAuxiliaryOptionsSupporting, PLContentSizeCategoryAdjusting> {
    UILabel *_optionsSummaryLabel;
    UIView *_overlayView;
    double _widthForCachedLayoutInfo;
    unsigned long long _cachedSummaryLabelNumberOfLines;
    NSStringDrawingContext *_drawingContext;
}

@property (retain, nonatomic) BSUIFontProvider *fontProvider;
@property (copy, nonatomic) NSString *optionsSummaryText;
@property (nonatomic) unsigned long long numberOfOptionButtons;
@property (readonly, nonatomic) NSArray *optionButtons;
@property (nonatomic) BOOL auxiliaryOptionsVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

- (void)layoutSubviews;
- (BOOL)adjustForContentSizeCategoryChange;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)a0;
- (double)_optionsSummaryWidthForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)_summaryLabelNumberOfLinesForBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (double)_optionsButtonWidthForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 optionButtonsCount:(unsigned long long)a1;
- (void)_configureOverlayIfNecessary;
- (void)_layoutOptionsSummaryLabel;
- (void)_layoutOptionsButtons;
- (void)_configureOptionsSummaryTextLabelIfNecessary;
- (void)_configureOptionsButtonsWithCount:(unsigned long long)a0;
- (void)_updateTextAttributesForOptionsSummaryLabel;
- (void)_updateTextAttributesForOptionButton:(id)a0;
- (id)_preferredFontForOptionsSummaryTextLabel;
- (id)_preferredFontForOptionButton;
- (id)_newOptionsButton;
- (void)_calculateOptionsSummaryLabelLayoutInfoForBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_optionsSummaryMeasuringFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
