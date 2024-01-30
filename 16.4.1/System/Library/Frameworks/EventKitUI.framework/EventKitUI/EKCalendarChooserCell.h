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
@property (retain, nonatomic) NSString *selectionCheckmarkCheckedSystemImageName;
@property (retain, nonatomic) NSString *selectionCheckmarkUncheckedSystemImageName;

- (void)setAccessoryType:(long long)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setContentAlpha:(double)a0;
- (void).cxx_destruct;
- (void)_updateTextLabelTextWithColorDot;
- (void)setColorDotHighlightedImage:(id)a0;
- (void)setColorDotImage:(id)a0;
- (double)textLeadingIndent;
- (void)updateSelectionCheckmark;

@end
