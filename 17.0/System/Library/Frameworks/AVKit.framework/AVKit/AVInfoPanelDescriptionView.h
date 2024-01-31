@class UIStackView, NSString, NSArray, UIImage, UITapGestureRecognizer, UIImageView, UIFont, AVTomatoRatingView, NSLayoutConstraint, UILabel, UIColor;

@interface AVInfoPanelDescriptionView : UIView <AVInfoPanelDescriptionViewFacade>

@property (class, readonly, nonatomic) UIImage *closedCaptioningBadgeImage;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } layoutSize;

@property (retain, nonatomic) UIImage *posterImage;
@property (copy, nonatomic) NSString *summaryText;
@property (copy, nonatomic) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic) UIImageView *posterView;
@property (readonly, nonatomic) UIStackView *nextToPosterStackView;
@property (readonly, nonatomic) UIStackView *actionButtonsStackView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) UILabel *seasonEpisodeLabel;
@property (readonly, nonatomic) UILabel *durationLabel;
@property (readonly, nonatomic) UILabel *genreLabel;
@property (readonly, nonatomic) UILabel *dateLabel;
@property (readonly, nonatomic) UILabel *mediaContentRatingLabel;
@property (readonly, nonatomic) UIImageView *mediaContentRatingImageView;
@property (readonly, nonatomic) UIImageView *viewingModeBadgeImageView;
@property (readonly, nonatomic) UIImageView *closedCaptionBadge;
@property (readonly, nonatomic) AVTomatoRatingView *tomatoRatingView;
@property (readonly, nonatomic) UILabel *summaryView;
@property (readonly, nonatomic) UITapGestureRecognizer *summaryOverflowGestureRecognizer;
@property (readonly, nonatomic) NSLayoutConstraint *posterViewWidthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *posterViewHeightConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *viewingModeBadgeWidthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *actionButtonsStackViewWidthConstraint;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) double contentTopMargin;
@property (nonatomic) double contentBottomMargin;

- (void)setTitleText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setSecondaryTitleText:(id)a0;
- (void)_updateActionButtons;
- (void)setClosedCaptionBadgeHidden:(BOOL)a0;
- (void)setContentMediaRatingText:(id)a0 image:(id)a1;
- (void)setDateText:(id)a0;
- (void)setDurationText:(id)a0;
- (void)setGenreText:(id)a0;
- (void)setPosterViewHidden:(BOOL)a0;
- (void)setSeasonEpisodeText:(id)a0;
- (void)setTomatoFreshness:(unsigned long long)a0 rating:(float)a1 hidden:(BOOL)a2;
- (void)setViewingModeBadge:(long long)a0;

@end
