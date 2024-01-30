@interface CKGroupActionChatItem : CKMultilineStampLabelChatItem

- (id)sender;
- (long long)actionType;
- (id)loadTranscriptText;

@end
