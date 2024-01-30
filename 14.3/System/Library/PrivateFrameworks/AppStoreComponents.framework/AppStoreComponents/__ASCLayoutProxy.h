@class NSString;

@interface __ASCLayoutProxy : NSObject {
    void /* unknown type, empty encoding */ base;
}

@property (class, nonatomic, readonly) double offerButtonHeight;
@property (class, nonatomic, readonly) double offerProgressDiameter;
@property (class, nonatomic, readonly) double axOfferButtonHeight;

@property (nonatomic, readonly) NSString *description;

+ (struct CGSize { double x0; double x1; })smallLockupEstimatedSizeFittingSize:(struct CGSize { double x0; double x1; })a0 compatibleWithTraitCollection:(id)a1;
+ (struct CGSize { double x0; double x1; })mediumLockupEstimatedSizeFittingSize:(struct CGSize { double x0; double x1; })a0 compatibleWithTraitCollection:(id)a1;
+ (long long)numberOfViewsInLockupMediaLayoutFor:(id)a0 and:(id)a1;
+ (id)artworkFrom:(id)a0 and:(id)a1;
+ (id)offerEmptyLayoutWithImageView:(id)a0 titleView:(id)a1 subtitleView:(id)a2;
+ (id)offerTextLayoutWithTitleBackgroundView:(id)a0 titleView:(id)a1 subtitleView:(id)a2 hasTrailingSubtitle:(BOOL)a3;
+ (id)offerIconLayoutWithImageView:(id)a0 titleView:(id)a1 subtitleView:(id)a2 hasTrailingSubtitle:(BOOL)a3;
+ (id)traitEnvironmentWithTraitCollection:(id)a0;
+ (id)adLockupLayoutWithTraitCollection:(id)a0 artworkView:(id)a1 headingText:(id)a2 titleText:(id)a3 subtitleText:(id)a4 offerText:(id)a5 offerButton:(id)a6 starRatingView:(id)a7 ratingCountLabel:(id)a8 adTransparencyButton:(id)a9 editorsChoiceView:(id)a10 descriptionLabel:(id)a11;
+ (id)lockupLayoutOfSize:(id)a0 traitCollection:(id)a1 artworkView:(id)a2 headingText:(id)a3 titleText:(id)a4 subtitleText:(id)a5 offerText:(id)a6 offerButton:(id)a7;
+ (struct CGSize { double x0; double x1; })lockupMediaPreferredMediaSizeWithFitting:(struct CGSize { double x0; double x1; })a0 for:(id)a1 and:(id)a2 in:(id)a3;
+ (id)lockupMediaLayoutWithScreenshots:(id)a0 trailers:(id)a1 mediaViews:(id)a2;
+ (id)lockupMediaSizingLayoutWithScreenshots:(id)a0 trailers:(id)a1 mediaViews:(id)a2;
+ (id)tvTextPillOverlayWithBackgroundView:(id)a0 textView:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })measuredSizeFittingSize:(struct CGSize { double x0; double x1; })a0 inTraitEnvironment:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentInsetsInTraitEnvironment:(id)a0;
- (void)placeChildrenRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inTraitEnvironment:(id)a1;

@end
