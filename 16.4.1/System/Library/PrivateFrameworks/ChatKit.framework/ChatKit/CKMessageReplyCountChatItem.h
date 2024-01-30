@interface CKMessageReplyCountChatItem : CKMessageStatusChatItem

@property (readonly, nonatomic) unsigned long long replyCount;

- (unsigned long long)layoutType;
- (long long)buttonType;
- (Class)cellClass;
- (id)_loadTranscriptButtonTextForReplyCountButtonType;
- (id)loadTranscriptButtonText;
- (BOOL)shouldHideDuringDarkFSM;
- (char)transcriptOrientation;

@end
