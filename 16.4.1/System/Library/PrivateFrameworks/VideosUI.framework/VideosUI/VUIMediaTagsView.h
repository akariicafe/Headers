@class NSArray, NSDictionary, UIImage, VUIMediaTagsViewLayout, NSString;

@interface VUIMediaTagsView : VUIBaseView <VUIRentalExpirationLabelDelegate, VUILabelBaselineProtocol>

@property (copy, nonatomic) NSDictionary *viewsMap;
@property (retain, nonatomic) NSArray *groupedSubviews;
@property (nonatomic) double totalSubviewsWidth;
@property (retain, nonatomic) UIImage *commonSenseLightImage;
@property (retain, nonatomic) UIImage *commonSenseDarkImage;
@property (readonly, nonatomic) VUIMediaTagsViewLayout *tagsViewLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagsViewWithMetadata:(id)a0 layout:(id)a1 existingView:(id)a2;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)firstBaselineOffsetFromTop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layout:(id)a1;
- (void).cxx_destruct;
- (void)updateWithMetadata:(id)a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_traitCollectionDidChange:(id)a0;
- (BOOL)_shouldApplyTintColor:(id)a0 forImage:(id)a1;
- (double)bottomMarginWithBaselineMargin:(double)a0;
- (void)_addGenreLabelAndSeparator;
- (void)_adjustViewsPositionFor:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1;
- (id)_firstLabelSubview;
- (struct CGSize { double x0; double x1; })_layoutSubviewsForSize:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (id)_newImageViewAsSubview:(BOOL)a0;
- (id)_newLabelAsSubview:(id)a0;
- (id)_newLabelAsSubview:(id)a0 withAttributedString:(id)a1;
- (id)_newRentalExpirationlabel:(id)a0 exisitingLabel:(id)a1;
- (id)_newTextBadgeViewAsSubview:(id)a0 layout:(id)a1 withString:(id)a2;
- (void)_removeGenreLabelAndSeparator;
- (void)_removeSeparatorsFromGroupsIfNeeded:(BOOL)a0;
- (BOOL)_shouldPutTextOnSeparateLines;
- (double)_totalSubviewsWidth;
- (void)_updateAppearanceWithUserInterfaceStyle:(unsigned long long)a0;
- (void)_updateImageAppearanceWithUserInterfaceStyle:(unsigned long long)a0;
- (double)bottomMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (void)rentalExpirationLabelNeedsRelayout:(id)a0;
- (double)topMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (double)topMarginWithBaselineMargin:(double)a0;
- (double)vui_baselineOffsetFromBottom;

@end
