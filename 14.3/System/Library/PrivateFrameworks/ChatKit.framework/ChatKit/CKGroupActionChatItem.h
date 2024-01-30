@interface CKGroupActionChatItem : CKMultilineStampChatItem

- (id)sender;
- (long long)actionType;
- (id)loadTranscriptText;

@end
