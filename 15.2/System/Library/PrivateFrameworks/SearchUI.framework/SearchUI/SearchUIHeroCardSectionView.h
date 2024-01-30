@class SearchUIImageView, NSString, SearchUILabel, UIVisualEffectView, NUIContainerStackView, SFImage, SearchUIFeatheredBlurView;

@interface SearchUIHeroCardSectionView : SearchUICardSectionView <TLKImageViewDelegate, NUIContainerViewDelegate>

@property (retain) SearchUIImageView *imageView;
@property (retain) UIVisualEffectView *punchoutIndicatorBackgroundBlurView;
@property (retain) SearchUIImageView *punchoutIndicatorImageView;
@property (retain) SearchUILabel *titleLabel;
@property (retain) SearchUILabel *subtitleLabel;
@property (retain) NUIContainerStackView *containerStackView;
@property (retain) NUIContainerStackView *buttonStackView;
@property (retain) SFImage *currentImage;
@property (retain) SearchUIFeatheredBlurView *blurEffectView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)layoutSubviews;
- (void)didFailToLoadImage;
- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (void)containerViewDidLayoutArrangedSubviews:(id)a0;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (void)didUpdateWithImage:(id)a0;
- (void)buttonPressed:(id)a0;
- (id)setupContentView;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (void)updateButtonsForCardSection:(id)a0;
- (void)updatePunchoutIconForRowModel:(id)a0;
- (void)updatePunchoutImageWithBundleIdentifier:(id)a0;
- (void)updateWithPunchoutImage:(id)a0;
- (void)updateWithButtonViews:(id)a0 visible:(BOOL)a1 addBackground:(BOOL)a2 animate:(BOOL)a3;

@end
