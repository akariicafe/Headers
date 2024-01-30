@interface IMUnreadCountChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) unsigned long long unreadCount;

- (id)_initWithItem:(id)a0 unreadCount:(unsigned long long)a1;

@end
