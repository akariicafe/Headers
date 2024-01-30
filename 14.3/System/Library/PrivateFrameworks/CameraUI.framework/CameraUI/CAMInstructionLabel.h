@class UIColor, NSString, UILabel, NSAttributedString;
@protocol CAMInstructionLabelDelegate;

@interface CAMInstructionLabel : UIView

@property (readonly, nonatomic) UILabel *_label;
@property (copy, nonatomic) NSAttributedString *_attributedText;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } _textInsets;
@property (readonly, nonatomic) UIColor *_textColor;
@property (readonly, nonatomic) double _backgroundAlpha;
@property (readonly, nonatomic) NSString *_symbolPrefixName;
@property (copy, nonatomic) NSString *text;
@property (weak, nonatomic) id<CAMInstructionLabelDelegate> delegate;
@property (nonatomic) long long style;
@property (nonatomic) BOOL useModeDialFontSize;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)_updateLabel;
- (void)updateToContentSize:(id)a0;
- (void)_updateAttributedText;
- (id)_textAttributes;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateLayer;

@end
