@class NSString, IMItem;

@interface IMReplyContextTextMessagePartChatItem : IMTextMessagePartChatItem <IMReplyContext>

@property (retain, nonatomic) IMItem *_parentItem;
@property (nonatomic) BOOL replyIsFromMe;
@property (copy, nonatomic) NSString *replyMessageGUID;

- (void).cxx_destruct;
- (BOOL)canDelete;
- (BOOL)isReplyContextPreview;
- (id)_initWithItem:(id)a0 parentItem:(id)a1 replyMessageGUID:(id)a2 replyIsFromMe:(BOOL)a3 text:(id)a4 index:(long long)a5 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 subject:(id)a7;
- (id)_initWithItem:(id)a0 parentItem:(id)a1 replyMessageGUID:(id)a2 replyIsFromMe:(BOOL)a3 text:(id)a4 index:(long long)a5 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 subject:(id)a7 shouldDisplayLink:(BOOL)a8;

@end
