@class MKButtonWithTargetArgument, NSLayoutConstraint;

@interface MKTransitDeparturesSectionFooterView : MKCustomSeparatorTableViewCell {
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (readonly, nonatomic) MKButtonWithTargetArgument *button;

+ (id)_font;
+ (double)defaultHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_contentSizeCategoryDidChange;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)_updateConstraintValues;

@end
