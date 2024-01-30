@class NSString, CKMediaObject;

@interface CKTransientAttachmentMessagePartChatItem : CKAttachmentMessagePartChatItem

@property (retain, nonatomic) NSString *parentGUID;
@property (retain, nonatomic) CKMediaObject *mediaObject;

- (void).cxx_destruct;
- (id)IMChatItem;
- (id)initWithParentChatItem:(id)a0;

@end
