@class NSString, CKMediaObject, UIView, LPLinkView;

@interface CKAttachmentBalloonView : CKImageBalloonView <LPLinkViewDelegate>

@property (retain, nonatomic) CKMediaObject *mediaObject;
@property (retain, nonatomic) LPLinkView *attachmentView;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } uncroppedSourceFrame;
@property (readonly) UIView *uncroppedSourceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_linkViewThumbnailFromMediaObject:(id)a0;
+ (id)linkMetadataFromMediaObject:(id)a0;

- (void)prepareForDisplay;
- (id)overlayImage;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)overlayColor;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)transferUpdated:(id)a0;
- (void)linkViewNeedsResize:(id)a0;
- (BOOL)_isFromMe;
- (void)_setProgressWithMediaObject:(id)a0;
- (void)configureForComposition:(id)a0;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2;
- (void)configureForMessagePart:(id)a0;
- (void)richIconDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;

@end
