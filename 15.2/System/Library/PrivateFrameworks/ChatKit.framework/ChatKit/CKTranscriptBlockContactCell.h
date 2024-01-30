@class UIButton, NSAttributedString;

@interface CKTranscriptBlockContactCell : CKTranscriptLabelCell

@property (copy, nonatomic) NSAttributedString *attributedButtonText;
@property (retain, nonatomic) UIButton *blockContactButton;

+ (id)blockContactButton;

- (void)layoutSubviewsForAlignmentContents;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)addFilter:(id)a0;
- (void).cxx_destruct;
- (void)clearFilters;

@end
