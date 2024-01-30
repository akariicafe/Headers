@class NSDictionary, NSString;

@interface CEKBadgeTextView : CEKBadgeView

@property (retain, nonatomic, setter=_setTextAttributes:) NSDictionary *_textAttributes;
@property (copy, nonatomic, setter=_setText:) NSString *_text;
@property (nonatomic, setter=_setTextInsets:) struct UIEdgeInsets { double top; double left; double bottom; double right; } _textInsets;
@property (copy, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) unsigned long long fontStyle;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_defaultTextInsets;
+ (double)_textHeightForContentSize:(id)a0;
+ (double)_heightForContentSize:(id)a0 textInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
+ (id)_textAttributesForContentSize:(id)a0 fontStyle:(unsigned long long)a1;
+ (id)_fontForContentSize:(id)a0 fontStyle:(unsigned long long)a1;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_textSize;
- (id)_maskImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
