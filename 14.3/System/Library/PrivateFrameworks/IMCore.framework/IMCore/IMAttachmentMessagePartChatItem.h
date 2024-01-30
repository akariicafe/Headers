@class NSString;

@interface IMAttachmentMessagePartChatItem : IMMessagePartChatItem {
    unsigned char _wantsAttachmentContiguous : 1;
}

@property (readonly, copy, nonatomic) NSString *transferGUID;
@property (readonly, nonatomic) BOOL parentChatIsSpam;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isAttachmentContiguousWithChatItem:(id)a0;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 transferGUID:(id)a4 parentChatIsSpam:(BOOL)a5;
- (id)replyContextPreviewChatItemForReply:(id)a0;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 transferGUID:(id)a4 parentChatIsSpam:(BOOL)a5 visibleAssociatedMessageChatItems:(id)a6;
- (BOOL)_wantsAttachmentContiguousForType:(id)a0;

@end
