@class NSArray;

@interface IMAggregateMessagePartChatItem : IMTextMessagePartChatItem

@property (readonly, copy, nonatomic) NSArray *subparts;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)_initWithItem:(id)a0 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 subparts:(id)a2;
- (id)replyContextPreviewChatItemForReply:(id)a0;

@end
