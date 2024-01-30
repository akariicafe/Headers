@interface CKGroupActionChatItem : CKMultilineStampChatItem

- (long long)actionType;
- (id)sender;
- (id)loadTranscriptText;

@end
