@class UILabel, NSTextAttachment, NSDictionary;

@interface CNContactDowntimeView : UIView

@property (readonly, nonatomic) UILabel *downtimeLabel;
@property (readonly, nonatomic) NSTextAttachment *imageAttachment;
@property (copy, nonatomic) NSDictionary *ab_textAttributes;
@property (nonatomic) long long elements;

+ (id)lockImageAttachment;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateAttributedText;
- (void)invalidateIntrinsicContentSize;
- (void).cxx_destruct;

@end
