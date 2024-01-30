@interface CKMessageActionChatItem : CKMultilineStampLabelChatItem

- (id)sender;
- (id)handle;
- (long long)actionType;
- (id)loadTranscriptText;

@end
