@interface CKMessageActionChatItem : CKMultilineStampChatItem

- (long long)actionType;
- (id)handle;
- (id)sender;
- (id)loadTranscriptText;

@end
