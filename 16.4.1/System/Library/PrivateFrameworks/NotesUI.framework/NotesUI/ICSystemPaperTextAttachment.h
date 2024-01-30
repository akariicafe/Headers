@class NSString, ICSelectorDelayer, NSHashTable, UIView, ICDrawingHashtagsAndMentionsController, NSURL;

@interface ICSystemPaperTextAttachment : ICInlineCanvasTextAttachment <PKPaperTextAttachment>

@property (class, readonly, nonatomic) BOOL isEnabled;

@property (retain, nonatomic) NSHashTable *systemPaperViews;
@property (copy, nonatomic) NSString *paperIdentifierBeforeAttachmentIsSet;
@property (retain, nonatomic) ICDrawingHashtagsAndMentionsController *hashtagsAndMentionsController;
@property (weak, nonatomic) UIView *cachedDrawingViewForPlaceView;
@property (weak, nonatomic) UIView *cachedControlViewForPlaceView;
@property (retain, nonatomic) ICSelectorDelayer *paperChangeSelectorDelayer;
@property (readonly, nonatomic) NSString *_paperIdentifier;
@property (readonly, nonatomic) NSURL *_paperBundleURL;
@property (readonly, nonatomic) NSURL *_encryptionDelegateCRContextURL;
@property (readonly, nonatomic) NSURL *_nonEncryptedContentCRContextURL;

- (id)fileType;
- (id)contents;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)_image;
- (void)detachView:(id)a0 fromParentView:(id)a1;
- (id)initWithData:(id)a0 ofType:(id)a1;
- (void)placeView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inParentView:(id)a2 characterIndex:(unsigned long long)a3 layoutManager:(id)a4;
- (id)viewProviderForParentView:(id)a0 characterIndex:(unsigned long long)a1 layoutManager:(id)a2;
- (id)attachmentViews;
- (void)_linkCanvasElementsDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_paperBoundsHint;
- (void)_paperDidChangeLocally;
- (struct CGSize { double x0; double x1; })_paperSizeHint;
- (id)attachmentAsNSTextAttachment;
- (BOOL)canDragWithoutSelecting;
- (id)initWithPaperIdentifier:(id)a0;
- (id)inlineViews;
- (void)paperDidChange;
- (id)printableTextContentForAppearanceType:(unsigned long long)a0;
- (void)resetZoom;

@end
