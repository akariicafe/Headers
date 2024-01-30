@class UIFont, NSString, UIColor, UILabel;

@interface BSUIEmojiLabelView : UIView {
    UILabel *_emojiLabel;
    NSString *_rawText;
}

@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundsForBaselines;
@property (readonly, nonatomic) UILabel *contentLabel;

- (void).cxx_destruct;
- (double)_firstLineBaselineOffsetFromBoundsTop;
- (double)_baselineOffsetFromBottom;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
