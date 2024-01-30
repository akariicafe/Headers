@class NSString, IMItem;

@interface IMReplyContextAttachmentMessagePartChatItem : IMAttachmentMessagePartChatItem <IMReplyContext>

@property (retain, nonatomic) IMItem *_parentItem;
@property (nonatomic) BOOL replyIsFromMe;
@property (copy, nonatomic) NSString *replyMessageGUID;

- (BOOL)isReplyContextPreview;
- (BOOL)canDelete;
- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 parentItem:(id)a1 replyMessageGUID:(id)a2 replyIsFromMe:(BOOL)a3 text:(id)a4 index:(long long)a5 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 transferGUID:(id)a7 chatContext:(id)a8;
- (id)_initWithItem:(id)a0 parentItem:(id)a1 replyMessageGUID:(id)a2 replyIsFromMe:(BOOL)a3 text:(id)a4 index:(long long)a5 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 transferGUID:(id)a7 chatContext:(id)a8 visibleAssociatedMessageChatItems:(id)a9;

@end
