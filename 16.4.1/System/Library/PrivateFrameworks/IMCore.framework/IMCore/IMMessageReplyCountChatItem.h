@class NSString, IMItem;

@interface IMMessageReplyCountChatItem : IMMessageStatusChatItem <IMReplyContext> {
    NSString *_threadIdentifier;
}

@property (retain, nonatomic) IMItem *_parentItem;
@property (readonly, nonatomic) BOOL replyIsFromMe;
@property (readonly, copy, nonatomic) NSString *replyMessageGUID;

- (id)threadIdentifier;
- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 parentItem:(id)a1 threadIdentifier:(id)a2 replyMessageGUID:(id)a3 replyIsFromMe:(BOOL)a4 count:(unsigned long long)a5;

@end
