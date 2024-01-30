@interface CKMessageActionChatItem : CKMultilineStampChatItem

- (id)sender;
- (long long)actionType;
- (id)handle;
- (id)loadTranscriptText;

@end
