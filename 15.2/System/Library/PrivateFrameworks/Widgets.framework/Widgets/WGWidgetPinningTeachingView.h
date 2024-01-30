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

- (void)_createConstraints;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)stopAnimating;
- (void).cxx_destruct;
- (void)startAnimating;
- (void)_updateAppearance;
- (id)init;
- (void)_contentSizeCategoryDidChange;
- (void)_updateFonts;
- (void)_createContentViews;
- (void)_createContainerViews;
- (void)_setupButtonsTargets;
- (void)_updateFontDependantConstraints;
- (void)_yesButtonTapped;
- (void)_noButtonTapped;

@end
