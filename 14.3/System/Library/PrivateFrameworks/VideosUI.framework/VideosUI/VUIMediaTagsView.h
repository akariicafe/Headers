@class NSArray, NSDictionary, UIImage, VUIMediaTagsViewLayout, NSString;

@interface VUIMediaTagsView : UIView <VUIRentalExpirationLabelDelegate, VUILabelBaselineProtocol>

@property (copy, nonatomic) NSDictionary *viewsMap;
@property (retain, nonatomic) NSArray *groupedSubviews;
@property (nonatomic) double totalSubviewsWidth;
@property (retain, nonatomic) UIImage *commonSenseLightImage;
@property (retain, nonatomic) UIImage *commonSenseDarkImage;
@property (readonly, nonatomic) VUIMediaTagsViewLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagsViewWithMetadata:(id)a0 layout:(id)a1 element:(id)a2 existingView:(id)a3;
+ (id)tagsViewWithMetadata:(id)a0 layout:(id)a1 existingView:(id)a2;

- (void).cxx_destruct;
- (double)baselineOffsetFromBottom;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layout:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)topMarginWithBaselineMargin:(double)a0;
- (double)bottomMarginWithBaselineMargin:(double)a0;
- (double)topMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (void)rentalExpirationLabelNeedsRelayout:(id)a0;
- (double)bottomMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (void)updateWithMetadata:(id)a0;
- (struct CGSize { double x0; double x1; })_layoutSubviewsForSize:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (BOOL)_shouldPutTextOnSeparateLines;
- (id)_firstLabelSubview;
- (void)_removeSeparatorsFromGroupsIfNeeded:(BOOL)a0;
- (id)_newLabelAsSubview:(id)a0;
- (id)_newLabelAsSubview:(id)a0 withAttributedString:(id)a1;
- (id)_newImageViewAsSubview;
- (id)_newRentalExpirationlabel:(id)a0 exisitingLabel:(id)a1;
- (void)_updateImageAppearanceWithUserInterfaceStyle:(long long)a0;
- (void)_updateAppearanceWithUserInterfaceStyle:(long long)a0;
- (double)_totalSubviewsWidth;
- (void)_removeGenreLabelAndSeparator;

@end
