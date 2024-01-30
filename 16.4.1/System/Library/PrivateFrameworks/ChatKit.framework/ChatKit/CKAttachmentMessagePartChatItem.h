@class NSString, CKMediaObject, NSURL, NSItemProvider, UITraitCollection;

@interface CKAttachmentMessagePartChatItem : CKMessagePartChatItem {
    NSItemProvider *_dragItemProvider;
    NSURL *_momentShareURL;
    UITraitCollection *_transcriptTraitCollection;
}

@property (retain, nonatomic) CKMediaObject *mediaObject;
@property (readonly, copy, nonatomic) NSString *transferGUID;
@property (readonly, copy, nonatomic) NSURL *momentShareURL;

- (BOOL)canCopy;
- (BOOL)canForward;
- (Class)cellClass;
- (id)dragItemProvider;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isSensitive;
- (BOOL)canExport;
- (BOOL)shouldCacheSize;
- (struct CGSize { double x0; double x1; })_transcoderGeneratedSizeFittingSize:(struct CGSize { double x0; double x1; })a0 sizeExists:(BOOL *)a1;
- (unsigned long long)balloonCorners;
- (Class)balloonViewClass;
- (BOOL)canPerformQuickAction;
- (id)compositionWithContext:(id)a0;
- (id)fileURLForAttachment;
- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)rtfDocumentItemsWithFormatString:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setTranscriptTraitCollection:(id)a0;
- (BOOL)stickersSnapToPoint;
- (id)transcriptTraitCollection;

@end
