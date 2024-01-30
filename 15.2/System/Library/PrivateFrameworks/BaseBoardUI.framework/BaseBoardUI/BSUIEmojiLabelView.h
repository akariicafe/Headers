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
@property (nonatomic, getter=_textAlignmentFollowsWritingDirection, setter=_setTextAlignmentFollowsWritingDirection:) BOOL _textAlignmentFollowsWritingDirection;
@property (readonly, nonatomic) UILabel *contentLabel;

- (double)_baselineOffsetFromBottom;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (double)_firstLineBaselineOffsetFromBoundsTop;

@end
