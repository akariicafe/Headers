@class WAAQIAttributionStringBuilder, City, UILabel, WAAQIScaleView, WAAQIViewStyler;
@protocol WAAQIViewDelegate;

@interface WAAQIView : UIView

@property (retain, nonatomic) UILabel *aqiLabel;
@property (retain, nonatomic) UILabel *aqiIndexLabel;
@property (retain, nonatomic) UILabel *aqiAgencyLabel;
@property (retain, nonatomic) UILabel *dash;
@property (retain, nonatomic) WAAQIScaleView *aqiScaleView;
@property (retain, nonatomic) UILabel *aqiCategoryLabel;
@property (retain, nonatomic) UILabel *airQualityMetadataGradeLabel;
@property (retain, nonatomic) UILabel *airQualityRecommendationLabel;
@property (retain, nonatomic) UILabel *aqiCitationLabel;
@property (retain, nonatomic) WAAQIViewStyler *styler;
@property (retain, nonatomic) City *city;
@property (retain, nonatomic) WAAQIAttributionStringBuilder *attributionStringBuilder;
@property (nonatomic) BOOL hideCitationString;
@property (nonatomic) BOOL hideRecommendationString;
@property (nonatomic) BOOL forceHideThisEntireView;
@property (nonatomic) unsigned long long layoutMode;
@property (nonatomic) BOOL initialized;
@property (weak, nonatomic) id<WAAQIViewDelegate> delegate;

+ (id)createWeatherLabelWithLightColor:(BOOL)a0;

- (void)initialize;
- (id)accessibilityLabel;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)accessibilityElementsHidden;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (void)handleTapGesture:(id)a0;
- (void)setupForLayoutExtendedScaleView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 basedOnFont:(id)a1 desiredBaseline:(double)a2;
- (double)contentMarginFromTop;
- (id)currentScaleCategoryLabelForCity:(id)a0;
- (id)drawableScaleForCity:(id)a0;
- (void)hideEverything;
- (void)layoutForCompactModeWithScaleInPlatterView:(BOOL)a0;
- (void)layoutForExtendedModeWithScale;
- (void)layoutForModeAQITemporarilyUnavailable;
- (void)layoutForModeWithoutScale;
- (void)layoutForTwoLinesLayoutWithScaleInPlatterView:(BOOL)a0;
- (id)metadataLabelForCity:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rtlAdjustFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)scaleDisplayNameForCity:(id)a0;
- (void)setupForLayoutCompactScaleViewOneLinePlatterView:(BOOL)a0;
- (void)setupForLayoutCompactScaleViewTwoLinesPlatterView:(BOOL)a0;
- (void)setupForLayoutExtendedNoScaleView;
- (void)setupForLayoutTemporarilyUnavailable;
- (BOOL)shouldInsertGlyphImage:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForAQIAvailableThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeForAQITemporarilyUnavailableThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeForCompactOneLineLayoutWithScaleViewThatFits:(struct CGSize { double x0; double x1; })a0 platterView:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeForExtendedLayoutWithScaleViewThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeForLayoutWithoutScaleViewThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeForTwoLineLayoutWithScaleViewTheFits:(struct CGSize { double x0; double x1; })a0 platterView:(BOOL)a1;
- (void)updateWithCity:(id)a0 layoutMode:(unsigned long long)a1;

@end
