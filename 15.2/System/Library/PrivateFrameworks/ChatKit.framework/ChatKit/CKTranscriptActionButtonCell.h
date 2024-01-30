@class UIButton;
@protocol CKTranscriptActionButtonCellDelegate;

@interface CKTranscriptActionButtonCell : CKTranscriptAbstractLabelCell {
    UIButton *_actionButton;
}

@property (weak, nonatomic) id<CKTranscriptActionButtonCellDelegate> delegate;

+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 attributedText:(id)a1 displayScale:(double)a2;
+ (id)reuseIdentifier;

- (id)attributedText;
- (void)buttonPrimaryActionTriggered:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (id)cellView;
- (id)label;
- (void)setAttributedText:(id)a0;
- (void).cxx_destruct;

@end
