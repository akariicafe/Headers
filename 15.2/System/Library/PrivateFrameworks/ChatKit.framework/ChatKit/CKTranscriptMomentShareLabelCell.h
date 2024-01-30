@class UILabel;

@interface CKTranscriptMomentShareLabelCell : CKTranscriptAbstractLabelCell {
    UILabel *_label;
}

+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 attributedText:(id)a1 displayScale:(double)a2;
+ (id)reuseIdentifier;

- (id)attributedText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (id)cellView;
- (id)label;
- (void)setAttributedText:(id)a0;
- (void).cxx_destruct;

@end
