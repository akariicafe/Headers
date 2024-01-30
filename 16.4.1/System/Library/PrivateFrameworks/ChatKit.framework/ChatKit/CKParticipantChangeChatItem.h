@interface CKParticipantChangeChatItem : CKMultilineStampLabelChatItem

- (id)sender;
- (long long)changeType;
- (id)handle;
- (id)activeTelephonyConversationUUID;
- (id)loadTranscriptText;

@end
