@class NSURL, CKLocationMediaObject;

@interface CKTranscriptLocationChatItem : CKAttachmentMessagePartChatItem

@property (retain, nonatomic) CKLocationMediaObject *locationMediaObject;
@property (retain, nonatomic) NSURL *locationURL;

- (void).cxx_destruct;
- (id)dragItemProvider;
- (BOOL)canCopy;
- (Class)balloonViewClass;
- (id)mediaObject;
- (id)transferGUID;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;

@end
