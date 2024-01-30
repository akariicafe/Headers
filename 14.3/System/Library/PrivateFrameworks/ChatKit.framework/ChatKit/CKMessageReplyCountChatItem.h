@interface CKMessageReplyCountChatItem : CKMessageStatusChatItem

@property (readonly, nonatomic) unsigned long long replyCount;

- (long long)buttonType;
- (BOOL)isEditable;
- (char)transcriptOrientation;
- (Class)cellClass;
- (id)_loadTranscriptButtonTextForReplyCountButtonType;
- (id)loadTranscriptButtonText;
- (BOOL)shouldHideDuringDarkFSM;

@end
