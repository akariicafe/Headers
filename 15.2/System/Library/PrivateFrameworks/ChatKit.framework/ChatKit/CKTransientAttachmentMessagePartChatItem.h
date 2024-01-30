@class NSString, CKMediaObject;

@interface CKTransientAttachmentMessagePartChatItem : CKAttachmentMessagePartChatItem

@property (retain, nonatomic) NSString *parentGUID;
@property (retain, nonatomic) CKMediaObject *mediaObject;

- (id)initWithParentChatItem:(id)a0;
- (void).cxx_destruct;
- (id)IMChatItem;

@end
