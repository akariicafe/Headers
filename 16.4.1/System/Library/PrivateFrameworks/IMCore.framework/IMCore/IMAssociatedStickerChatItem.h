@class NSString;

@interface IMAssociatedStickerChatItem : IMAssociatedMessageChatItem

@property (readonly, copy, nonatomic) NSString *transferGUID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canDelete;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 sender:(id)a1 transferGUID:(id)a2;

@end
