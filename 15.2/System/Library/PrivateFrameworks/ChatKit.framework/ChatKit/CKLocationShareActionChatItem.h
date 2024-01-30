@interface CKLocationShareActionChatItem : CKMultilineStampChatItem

- (long long)actionType;
- (id)handle;
- (id)sender;
- (long long)direction;
- (id)loadTranscriptText;

@end
