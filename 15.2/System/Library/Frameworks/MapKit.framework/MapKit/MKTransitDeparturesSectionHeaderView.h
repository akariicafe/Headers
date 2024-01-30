@class MKButtonWithTargetArgument, NSString, UIStackView, NSTimer, UIActivityIndicatorView, _MKUILabel, NSLayoutConstraint;

@interface MKTransitDeparturesSectionHeaderView : MKCustomSeparatorCell {
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

- (id)initWithType:(unsigned long long)a0 extraSpacing:(BOOL)a1;
- (id)initWithType:(unsigned long long)a0 extraSpacing:(BOOL)a1 reuseIdentifier:(id)a2;
- (id)_initWithType:(unsigned long long)a0 extraSpacing:(BOOL)a1 reuseIdentifier:(id)a2;
- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (void)tintColorDidChange;
- (void)dealloc;

@end
