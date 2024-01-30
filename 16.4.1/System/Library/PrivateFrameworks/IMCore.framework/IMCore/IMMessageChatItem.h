@class IMMessage, IMHandle, IMMessageItem, NSString, NSDate;

@interface IMMessageChatItem : IMTranscriptChatItem <IMMessageChatItem>

@property (readonly, nonatomic) IMMessage *message;
@property (readonly, nonatomic) IMMessageItem *messageItem;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) BOOL failed;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) IMHandle *sender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canReply;

@end
