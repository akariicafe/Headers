@class UIView, NSString, UIImage, NSAttributedString, UIImageView, PKPaymentAuthorizationLayout, NSMutableArray, UILabel;

@interface PKPaymentAuthorizationItemCell : PKTableViewCell {
    PKPaymentAuthorizationLayout *_layout;
    UILabel *_labelView;
    NSMutableArray *_valueViews;
    UIView *_separatorView;
    UIImageView *_arrowView;
    UIImageView *_alertView;
    UIImageView *_labelImageView;
    NSMutableArray *_constraints;
    BOOL _constraintsDirty;
}

@property (copy, nonatomic) NSAttributedString *label;
@property (copy, nonatomic) UIImage *labelImage;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (nonatomic) BOOL showsDisclosure;
@property (nonatomic) BOOL showsSeparator;
@property (nonatomic, getter=isCentered) BOOL centered;

- (id)addValue:(id)a0;
- (void)_createSubviews;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithLayout:(id)a0 reuseIdentifier:(id)a1;
- (id)addValue:(id)a0 type:(unsigned long long)a1;
- (id)_createValueView;
- (id)colorForValueType:(unsigned long long)a0;
- (id)_applyStylingToValueString:(id)a0 defaultColor:(id)a1;

@end
