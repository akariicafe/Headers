@class NSAttributedString;

@interface CKReportSpamChatItem : CKStampChatItem

@property (copy, nonatomic) NSAttributedString *transcriptButtonText;
@property (readonly, copy, nonatomic) NSAttributedString *internalPhishingWarning;

- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (BOOL)hasMultipleMessages;
- (id)transcriptTextForSpam:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)showReportSMSSpam;
- (BOOL)isGroupChat;
- (id)loadTranscriptText;
- (Class)cellClass;

@end
