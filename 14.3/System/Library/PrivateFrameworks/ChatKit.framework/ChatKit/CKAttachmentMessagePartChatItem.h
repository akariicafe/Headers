@class NSString, CKMediaObject, NSItemProvider, UITraitCollection;

@interface CKAttachmentMessagePartChatItem : CKMessagePartChatItem {
    NSItemProvider *_dragItemProvider;
    UITraitCollection *_transcriptTraitCollection;
}

@property (retain, nonatomic) CKMediaObject *mediaObject;
@property (readonly, copy, nonatomic) NSString *transferGUID;

- (void).cxx_destruct;
- (id)dragItemProvider;
- (id)rtfDocumentItemsWithFormatString:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setTranscriptTraitCollection:(id)a0;
- (BOOL)canCopy;
- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (id)transcriptTraitCollection;
- (Class)balloonViewClass;
- (id)description;
- (BOOL)stickersSnapToPoint;
- (BOOL)shouldCacheSize;
- (BOOL)canForward;
- (BOOL)canExport;
- (id)compositionWithContext:(id)a0;
- (struct CGSize { double x0; double x1; })_transcoderGeneratedSizeFittingSize:(struct CGSize { double x0; double x1; })a0 sizeExists:(BOOL *)a1;
- (id)fileURLForAttachment;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (unsigned long long)balloonCorners;

@end
