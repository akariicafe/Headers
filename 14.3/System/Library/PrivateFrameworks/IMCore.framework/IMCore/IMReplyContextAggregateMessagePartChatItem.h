@class NSString, IMItem;

@interface IMReplyContextAggregateMessagePartChatItem : IMAggregateMessagePartChatItem <IMReplyContext>

@property (retain, nonatomic) IMItem *_parentItem;
@property (nonatomic) BOOL replyIsFromMe;
@property (copy, nonatomic) NSString *replyMessageGUID;

- (void).cxx_destruct;
- (BOOL)canDelete;
- (BOOL)isReplyContextPreview;
- (id)_initWithItem:(id)a0 parentItem:(id)a1 replyMessageGUID:(id)a2 replyIsFromMe:(BOOL)a3 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 subparts:(id)a5;

@end
