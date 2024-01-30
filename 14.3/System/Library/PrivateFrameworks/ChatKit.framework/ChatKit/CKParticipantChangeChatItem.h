@interface CKParticipantChangeChatItem : CKMultilineStampChatItem

- (long long)changeType;
- (id)sender;
- (id)handle;
- (id)loadTranscriptText;

@end
