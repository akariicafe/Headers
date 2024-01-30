@interface CKParticipantChangeChatItem : CKMultilineStampChatItem

- (id)handle;
- (id)sender;
- (id)activeTelephonyConversationUUID;
- (long long)changeType;
- (id)loadTranscriptText;

@end
