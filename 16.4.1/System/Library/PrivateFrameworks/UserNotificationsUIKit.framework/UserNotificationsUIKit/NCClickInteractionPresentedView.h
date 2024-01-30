@class NSString, NSArray, UILabel, MTVisualStylingProvider;

@interface NCClickInteractionPresentedView : UIView <MTVisualStylingRequiring, PLContentSizeCategoryAdjusting> {
    UILabel *_titleLabel;
    struct CGSize { double width; double height; } _cachedSizeThatFits;
    MTVisualStylingProvider *_visualStylingProvider;
}

@property (copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

- (void)_updateTitleLabelVisualStyling;
- (void)_updateTitleLabelTextAttributes;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)visualStylingProviderForCategory:(long long)a0;
- (void)_reduceTransparencyStatusDidChange:(id)a0;
- (id)initWithTitle:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)_configureTitleLabel;
- (void).cxx_destruct;
- (void)_updateTitleLabelAnchorPointAndPosition;
- (void)_darkerSystemColorsStatusDidChange:(id)a0;

@end
