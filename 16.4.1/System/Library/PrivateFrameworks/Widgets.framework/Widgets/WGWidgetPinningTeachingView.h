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

- (void)_contentSizeCategoryDidChange;
- (void)startAnimating;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)stopAnimating;
- (void)_updateFonts;
- (id)init;
- (void).cxx_destruct;
- (void)_createConstraints;
- (void)_updateAppearance;
- (void)_createContentViews;
- (void)_noButtonTapped;
- (void)_updateFontDependantConstraints;
- (void)_createContainerViews;
- (void)_setupButtonsTargets;
- (void)_yesButtonTapped;

@end
