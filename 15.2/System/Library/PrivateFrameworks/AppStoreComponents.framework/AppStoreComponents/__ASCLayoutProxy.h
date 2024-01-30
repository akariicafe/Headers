@class NSString;

@interface __ASCLayoutProxy : NSObject {
    void /* unknown type, empty encoding */ base;
}

@property (class, nonatomic, readonly) double offerButtonHeight;
@property (class, nonatomic, readonly) double offerProgressDiameter;
@property (class, nonatomic, readonly) double axOfferButtonHeight;
@property (class, nonatomic, readonly) double offerButtonRegularWidth;
@property (class, nonatomic, readonly) double offerButtonFixedHeight;

@property (nonatomic, readonly) NSString *description;

+ (double)adTransparencyDeveloperNamePointSizeProvider:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectWithLayoutDirectionForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inTraitEnvironment:(id)a1 relativeTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (struct CGSize { double x0; double x1; })smallLockupEstimatedSizeFittingSize:(struct CGSize { double x0; double x1; })a0 compatibleWithTraitCollection:(id)a1;
+ (struct CGSize { double x0; double x1; })mediumLockupEstimatedSizeFittingSize:(struct CGSize { double x0; double x1; })a0 compatibleWithTraitCollection:(id)a1;
+ (struct CGSize { double x0; double x1; })smallOfferButtonLockupEstimatedSizeFittingSize:(struct CGSize { double x0; double x1; })a0 compatibleWithTraitCollection:(id)a1;
+ (id)artworkFrom:(id)a0 and:(id)a1;
+ (double)adTransparencyButtonTitlePointSizeProvider:(id)a0;
+ (double)adTransparencyButtonScaledCapInset:(double)a0 in:(id)a1;
+ (id)offerEmptyLayoutWithImageView:(id)a0 titleView:(id)a1 subtitleView:(id)a2;
+ (id)offerTextLayoutWithTitleBackgroundView:(id)a0 titleView:(id)a1 subtitleView:(id)a2 hasTrailingSubtitle:(BOOL)a3 shouldTopAlign:(BOOL)a4;
+ (id)offerIconLayoutWithImageView:(id)a0 titleView:(id)a1 subtitleView:(id)a2 hasTrailingSubtitle:(BOOL)a3 shouldTopAlign:(BOOL)a4;
+ (id)traitEnvironmentWithTraitCollection:(id)a0;
+ (id)adLockupLayoutWithTraitCollection:(id)a0 artworkView:(id)a1 headingText:(id)a2 titleText:(id)a3 subtitleText:(id)a4 offerText:(id)a5 offerButton:(id)a6 starRatingView:(id)a7 ratingCountLabel:(id)a8 adTransparencyButton:(id)a9 editorsChoiceView:(id)a10 descriptionLabel:(id)a11;
+ (double)lockupTitlePointSizeProvider:(id)a0;
+ (double)lockupSubtitlePointSizeProvider:(id)a0;
+ (double)lockupHeadingPointSizeProvider:(id)a0;
+ (id)lockupLayoutOfSize:(id)a0 traitCollection:(id)a1 artworkView:(id)a2 headingText:(id)a3 titleText:(id)a4 subtitleText:(id)a5 offerText:(id)a6 offerButton:(id)a7;
+ (struct CGSize { double x0; double x1; })lockupMediaPreferredMediaSizeWithFitting:(struct CGSize { double x0; double x1; })a0 for:(id)a1 with:(id)a2 and:(id)a3 in:(id)a4;
+ (id)lockupMediaLayoutFor:(id)a0 screenshots:(id)a1 trailers:(id)a2 containerView:(id)a3 mediaViews:(id)a4;
+ (id)lockupMediaSizingLayoutFor:(id)a0 screenshots:(id)a1 trailers:(id)a2 containerView:(id)a3 mediaViews:(id)a4;
+ (struct CGSize { double x0; double x1; })estimatedMediaContentSizeFor:(id)a0 screenshots:(id)a1 trailers:(id)a2 fitting:(struct CGSize { double x0; double x1; })a3 in:(id)a4;
+ (double)containerViewRotationAngleFor:(id)a0 screenshots:(id)a1 trailers:(id)a2;
+ (long long)numberOfViewsInLockupMediaLayoutFor:(id)a0 with:(id)a1 and:(id)a2;
+ (id)tvTextPillOverlayWithBackgroundView:(id)a0 textView:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })measuredSizeFittingSize:(struct CGSize { double x0; double x1; })a0 inTraitEnvironment:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentInsetsInTraitEnvironment:(id)a0;
- (void)placeChildrenRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inTraitEnvironment:(id)a1;

@end
