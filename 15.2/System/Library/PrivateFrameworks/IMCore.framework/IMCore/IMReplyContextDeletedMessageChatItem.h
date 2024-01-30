@class NSString;

@interface IMReplyContextDeletedMessageChatItem : IMReplyContextTextMessagePartChatItem <IMReplyContext>

@property (readonly, nonatomic) BOOL replyIsFromMe;
@property (readonly, copy, nonatomic) NSString *replyMessageGUID;

@end
