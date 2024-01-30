@class UILabel, NUTrait, NUErrorMessage;

@interface NUErrorView : UIView

@property (readonly, nonatomic) UILabel *label;
@property (retain, nonatomic) NUTrait *labelMaxWidthTrait;
@property (retain, nonatomic) NUErrorMessage *errorMessage;
@property (nonatomic) long long textAlignment;
@property (nonatomic) unsigned long long verticalAlignment;

- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (id)attributedStringForErrorMessage:(id)a0;
- (id)initWithErrorMessage:(id)a0;
- (void)errorMessage:(id)a0;

@end
