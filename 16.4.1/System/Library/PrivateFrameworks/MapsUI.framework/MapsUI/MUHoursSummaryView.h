@class UITapGestureRecognizer, UILayoutGuide, UIImageView, UIView, NSLayoutConstraint, MUHoursSummaryViewModel;
@protocol MULabelViewProtocol;

@interface MUHoursSummaryView : UIView {
    UILayoutGuide *_summaryStackLayoutGuide;
    UIImageView *_expansionIndicator;
    BOOL _expanded;
    UIView<MULabelViewProtocol> *_titleLabel;
    UIView<MULabelViewProtocol> *_hoursLabel;
    UIView<MULabelViewProtocol> *_openStateLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSLayoutConstraint *_titleToOpenStateConstraint;
    NSLayoutConstraint *_titleToHoursConstraint;
    NSLayoutConstraint *_hoursToOpenStateConstraint;
}

@property (readonly, nonatomic) MUHoursSummaryViewModel *viewModel;
@property (copy, nonatomic) id /* block */ actionHandler;

- (id)initWithViewModel:(id)a0;
- (void)_setupConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)handleAnimation;
- (void)_handleAnimationStartForNormalHours;
- (void)_handleNormalHoursAnimation;
- (void)_handleServiceHoursAnimation;
- (void)_updateExpandButton;
- (void)expandButtonTapped;
- (void)handleAnimationStart;

@end
