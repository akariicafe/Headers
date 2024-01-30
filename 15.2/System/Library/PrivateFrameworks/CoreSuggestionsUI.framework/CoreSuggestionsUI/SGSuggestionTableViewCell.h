@class SGSuggestionAction, UIImageView, SGSuggestionTableViewController, UILabel, NSLayoutConstraint, UIButton;
@protocol SGSuggestion, NSObject;

@interface SGSuggestionTableViewCell : UITableViewCell {
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_dismissButton;
    UIButton *_primaryButton;
    SGSuggestionAction *_primaryAction;
    SGSuggestionAction *_dismissAction;
    NSLayoutConstraint *_topMarginConstraint;
    NSLayoutConstraint *_interLabelBaselineDeltaConstraint;
    NSLayoutConstraint *_interTitleAndButtonBaselineConstraint;
    NSLayoutConstraint *_interSubtitleAndButtonBaselineConstraint;
    NSLayoutConstraint *_bottomMarginConstraint;
    id<NSObject> _observerToken;
    long long _currentStyle;
}

@property (retain, nonatomic) id<SGSuggestion> suggestion;
@property (weak, nonatomic) SGSuggestionTableViewController *controller;

+ (id)titleFont;
+ (double)topMarginConstant;
+ (double)interLabelBaselineDeltaConstant;
+ (double)bottomMarginConstant;
+ (id)defaultReuseIdentifier;
+ (id)descriptionFont;
+ (id)buttonTitleFont;
+ (double)interLabelAndButtonBaselineDeltaConstant;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)init;
- (id)_titleColor;
- (void)dealloc;
- (id)_backgroundColor;
- (id)_subtitleColor;
- (void)_dismissButtonTapped:(id)a0;
- (void)_activateConstraint:(id)a0;
- (void)_setLabelAndButtonFonts;
- (id)_setButton:(id)a0 action:(id)a1;
- (void)_primaryButtonTapped:(id)a0;
- (void)_updateCurrentAppearance;

@end
