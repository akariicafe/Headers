@class NSAttributedString;

@interface CKBlockContactChatItem : CKStampChatItem

@property (copy, nonatomic) NSAttributedString *transcriptButtonText;

- (BOOL)__im_ff_commSafetyUIEnabled;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (void).cxx_destruct;
- (id)loadTranscriptText;
- (Class)cellClass;

@end
