@class NSAttributedString;

@interface CKReportSpamChatItem : CKStampLabelChatItem

@property (copy, nonatomic) NSAttributedString *transcriptButtonText;
@property (readonly, copy, nonatomic) NSAttributedString *internalPhishingWarning;

- (unsigned long long)layoutType;
- (Class)cellClass;
- (void).cxx_destruct;
- (BOOL)isGroupChat;
- (BOOL)hasMultipleMessages;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)loadTranscriptText;
- (BOOL)showReportSMSSpam;
- (id)transcriptTextForSpam:(BOOL)a0;

@end
