@class NSArray;

@interface IMAggregateAttachmentMessagePartChatItem : IMAttachmentMessagePartChatItem

@property (copy, nonatomic) NSArray *aggregateAttachmentParts;
@property (readonly, copy, nonatomic) NSArray *transferGUIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 transferGUIDs:(id)a4 chatContext:(id)a5;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 transferGUIDs:(id)a4 chatContext:(id)a5 visibleAssociatedMessageChatItems:(id)a6;
- (BOOL)isAttachmentContiguousWithChatItem:(id)a0;
- (id)replyContextPreviewChatItemForReply:(id)a0 chatContext:(id)a1;

@end
