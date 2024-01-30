@interface CKMessageRetractionChatItem : CKStampButtonChatItem

@property (readonly, nonatomic) BOOL isRetractedReply;
@property (readonly, nonatomic) BOOL isRetractedReplyThreadOriginator;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (id)_loadTranscriptTextWithRetractionUnsupportedCount:(unsigned long long)a0 unsupportedNames:(id)a1 isFromMe:(BOOL)a2 isFailedRetraction:(BOOL)a3 senderName:(id)a4;
- (id)_retractionUnsupportedByNamesFromHandles:(id)a0;
- (BOOL)canBeSelectedInEditMode;
- (id)imMessageRetractionChatItem;
- (id)loadTranscriptText;

@end
