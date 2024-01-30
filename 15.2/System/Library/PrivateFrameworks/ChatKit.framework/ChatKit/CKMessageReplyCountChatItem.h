@interface CKMessageReplyCountChatItem : CKMessageStatusChatItem

@property (readonly, nonatomic) unsigned long long replyCount;

- (long long)buttonType;
- (BOOL)isEditable;
- (id)_loadTranscriptButtonTextForReplyCountButtonType;
- (char)transcriptOrientation;
- (id)loadTranscriptButtonText;
- (BOOL)shouldHideDuringDarkFSM;
- (Class)cellClass;

@end
