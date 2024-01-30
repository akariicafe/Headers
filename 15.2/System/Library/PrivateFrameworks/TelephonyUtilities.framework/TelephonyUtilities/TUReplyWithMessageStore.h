@interface TUReplyWithMessageStore : NSObject

- (id)init;
- (int)count;
- (void)dealloc;
- (id)_defaultRepliesForSending:(BOOL)a0;
- (id)customReplies;
- (id)_cannedRepliesForSending:(BOOL)a0;
- (id)cannedReplies;
- (id)defaultReplies;
- (id)cannedReplyActionSheetOptions;
- (id)cannedRepliesForSending;
- (void)setCustomReply:(id)a0 atIndex:(unsigned long long)a1;
- (void)_handleMessagesStoreChanged;

@end
