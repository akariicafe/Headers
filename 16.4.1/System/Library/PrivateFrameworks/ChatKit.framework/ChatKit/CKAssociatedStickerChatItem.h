@class CKMediaObject, NSString;

@interface CKAssociatedStickerChatItem : CKAssociatedMessageChatItem

@property (retain, nonatomic) CKMediaObject *mediaObject;
@property (readonly, copy, nonatomic) NSString *transferGUID;

- (Class)cellClass;
- (void).cxx_destruct;
- (id)IMAssociatedStickerChatItem;
- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (char)transcriptOrientation;

@end
