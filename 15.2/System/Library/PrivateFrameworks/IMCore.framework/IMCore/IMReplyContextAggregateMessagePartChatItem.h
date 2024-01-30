@class NSString, IMItem;

@interface IMReplyContextAggregateMessagePartChatItem : IMAggregateMessagePartChatItem <IMReplyContext>

@property (retain, nonatomic) IMItem *_parentItem;
@property (nonatomic) BOOL replyIsFromMe;
@property (copy, nonatomic) NSString *replyMessageGUID;

- (BOOL)isReplyContextPreview;
- (BOOL)canDelete;
- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 parentItem:(id)a1 replyMessageGUID:(id)a2 replyIsFromMe:(BOOL)a3 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 subparts:(id)a5;

@end
