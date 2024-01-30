@class UIProgressView, PSSoftwareUpdateAnimatedIcon, UIImageView, UIImage, NSLayoutConstraint, UILabel, PSWebContainerView;

@interface PSSoftwareUpdateTitleCell : PSTableCell {
    int _progressStyle;
    PSSoftwareUpdateAnimatedIcon *_animatedGearView;
    BOOL _animatingGearView;
}

@property (retain, nonatomic) NSLayoutConstraint *updateStatusLabelVerticalConstraint;
@property (readonly, nonatomic) UIImage *gearBackgroundImage;
@property (retain, nonatomic) UIImageView *gearBackgroundImageView;
@property (readonly, nonatomic) UIProgressView *progressBar;
@property (nonatomic) int progressDisplayStyle;
@property (readonly, nonatomic) UILabel *updateStatusLabel;
@property (readonly, nonatomic) PSWebContainerView *releaseNotesSummaryView;

+ (long long)cellStyle;

- (void)layoutSubviews;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)setProgress:(float)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)setupViews;
- (id)newProgressBar;
- (void)configureUpdateNameLabel:(BOOL)a0;
- (void)configurePublisherLabel:(BOOL)a0;
- (void)configureImageView;
- (void)setUpdateName:(id)a0;
- (void)configureAnimatedGearViewFromImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)createGearIconConstraints;
- (void)configureUpdateStatusLabel:(BOOL)a0;
- (void)configureReleaseNotesSummaryView:(BOOL)a0;
- (void)configureProgressBar:(BOOL)a0;
- (id)newGearBackgroundImageView;
- (id)newSoftwareUpdateAnimatedIconWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPublisherText:(id)a0;
- (id)newUpdateStatusLabel;
- (void)updateProgressTintColor;
- (void)setAnimatingGearView:(BOOL)a0;
- (void)setStatusMessage:(id)a0;
- (double)preferredHeightWithTable:(id)a0;
- (void)setReleaseNotesSummary:(id)a0;

@end
