@class UIColor, NSString, UIImageView, UIImage, NSTextAttachment;

@interface EKCalendarChooserCell : EKUITableViewCell {
    UIImage *_colorDot;
    UIImage *_colorDotHighlighted;
    UIImageView *_colorDotView;
    UIImageView *_checkmarkView;
    UIColor *_checkMarkColor;
    NSTextAttachment *_colorDotAttachment;
}

@property (nonatomic) BOOL showingSelectionCheckmark;
@property (nonatomic) BOOL multiSelectStyle;
@property (nonatomic) BOOL showCheckmarksOnLeft;
@property (nonatomic) BOOL checked;
@property (nonatomic) BOOL shouldAnimate;
@property (nonatomic) BOOL showsColorDot;
@property (retain, nonatomic) NSString *textLabelText;
@property (retain, nonatomic) UIColor *selectionCheckmarkColor;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setAccessoryType:(long long)a0;
- (void)setContentAlpha:(double)a0;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_updateTextLabelTextWithColorDot;
- (void)updateSelectionCheckmark;
- (void)setColorDotImage:(id)a0;
- (void)setColorDotHighlightedImage:(id)a0;
- (double)textLeadingIndent;

@end
