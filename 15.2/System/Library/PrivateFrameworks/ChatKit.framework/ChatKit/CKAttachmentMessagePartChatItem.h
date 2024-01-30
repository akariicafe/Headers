@class NSString, CKMediaObject, NSURL, NSItemProvider, UITraitCollection;

@interface CKAttachmentMessagePartChatItem : CKMessagePartChatItem {
    NSItemProvider *_dragItemProvider;
    NSURL *_momentShareURL;
    UITraitCollection *_transcriptTraitCollection;
}

@property (retain, nonatomic) CKMediaObject *mediaObject;
@property (readonly, copy, nonatomic) NSString *transferGUID;
@property (readonly, copy, nonatomic) NSURL *momentShareURL;

- (BOOL)isSensitive;
- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (id)transcriptTraitCollection;
- (id)dragItemProvider;
- (Class)balloonViewClass;
- (BOOL)canExport;
- (unsigned long long)balloonCorners;
- (BOOL)__im_ff_commSafetyUIEnabled;
- (BOOL)canCopy;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)description;
- (id)rtfDocumentItemsWithFormatString:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)compositionWithContext:(id)a0;
- (void)setTranscriptTraitCollection:(id)a0;
- (BOOL)stickersSnapToPoint;
- (struct CGSize { double x0; double x1; })_transcoderGeneratedSizeFittingSize:(struct CGSize { double x0; double x1; })a0 sizeExists:(BOOL *)a1;
- (id)fileURLForAttachment;
- (BOOL)canQuickSave;
- (void).cxx_destruct;
- (BOOL)shouldCacheSize;
- (Class)cellClass;
- (BOOL)canForward;

@end
