@class UIView, WGWidgetPinningTeachingAnimationView, UILabel, NSLayoutConstraint, UIButton;
@protocol WGWidgetPinningTeachingViewDelegate;

@interface WGWidgetPinningTeachingView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UIButton *yesButton;
@property (retain, nonatomic) UIButton *noButton;
@property (retain, nonatomic) WGWidgetPinningTeachingAnimationView *iconImageView;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelToBodyLabelConstraint;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) id<WGWidgetPinningTeachingViewDelegate> delegate;

- (void)_updateFonts;
- (void)_contentSizeCategoryDidChange;
- (id)init;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_createConstraints;
- (void)stopAnimating;
- (void)startAnimating;
- (void)_updateAppearance;
- (void)_createContainerViews;
- (void)_createContentViews;
- (void)_setupButtonsTargets;
- (void)_updateFontDependantConstraints;
- (void)_yesButtonTapped;
- (void)_noButtonTapped;

@end
