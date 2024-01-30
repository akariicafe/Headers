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
+ (id)defaultReuseIdentifier;
+ (double)topMarginConstant;
+ (double)interLabelBaselineDeltaConstant;
+ (double)bottomMarginConstant;
+ (id)descriptionFont;
+ (id)buttonTitleFont;
+ (double)interLabelAndButtonBaselineDeltaConstant;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateConstraints;
- (void)_dismissButtonTapped:(id)a0;
- (id)_titleColor;
- (id)_subtitleColor;
- (id)_backgroundColor;
- (void)_activateConstraint:(id)a0;
- (void)_setLabelAndButtonFonts;
- (id)_setButton:(id)a0 action:(id)a1;
- (void)_primaryButtonTapped:(id)a0;
- (void)_updateCurrentAppearance;

@end
