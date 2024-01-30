@class MKButtonWithTargetArgument, NSString, UIStackView, NSTimer, UIActivityIndicatorView, _MKUILabel, NSLayoutConstraint;

@interface MKTransitDeparturesSectionHeaderView : MKCustomSeparatorTableViewCell {
    unsigned long long _type;
    BOOL _extraSpacing;
    _MKUILabel *_label;
    UIStackView *_updatingView;
    _MKUILabel *_updatingLabel;
    NSTimer *_updatingLabelTimestampRefreshTimer;
    NSTimer *_updatingViewRefreshTimer;
    UIActivityIndicatorView *_updatingSpinner;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (copy, nonatomic) NSString *text;
@property (readonly, nonatomic) MKButtonWithTargetArgument *button;

+ (id)_font:(unsigned long long)a0;
+ (id)_buttonFont:(unsigned long long)a0;

- (void)_contentSizeCategoryDidChange;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithType:(unsigned long long)a0 extraSpacing:(BOOL)a1 reuseIdentifier:(id)a2;
- (void)_updateConstraintValues;
- (id)initWithType:(unsigned long long)a0 extraSpacing:(BOOL)a1;

@end
