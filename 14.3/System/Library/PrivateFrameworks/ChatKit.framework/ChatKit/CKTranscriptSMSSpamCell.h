@class NSAttributedString;

@interface CKTranscriptSMSSpamCell : CKTranscriptLabelCell

@property (copy, nonatomic) NSAttributedString *attributedButtonText;

- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)layoutSubviewsForAlignmentContents;
- (void)clearFilters;
- (void).cxx_destruct;
- (void)addFilter:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
