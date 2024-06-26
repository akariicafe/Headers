@class NSTextElement, NSString, NSArray, NSMapTable, NSSet, NSTextLayoutManager, NSTextParagraph, NSOperationQueue, NSTextStorage, NSTextRange, _NSTextAttributeStorage, NSLayoutManager;
@protocol NSTextLocation;

@interface NSTextLayoutFragment : NSObject <NSCoreTypesetterDelegateInternal, __NSTextRunStorageDataSource, NSSecureCoding, NSTextViewportElement> {
    NSTextLayoutManager *_textLayoutManager;
    NSTextElement *_textElement;
    NSTextRange *_rangeInElement;
    _NSTextAttributeStorage *_renderingAttributesTable;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _layoutFragmentFrame;
    NSMapTable *_textAttachmentContextTable;
    BOOL _isTextParagraph;
    struct _NSRange { unsigned long long location; unsigned long long length; } _characterRange;
    unsigned long long _sourceVerticalDelta;
    unsigned long long _sourceRangeDelta;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceBoundingRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _destinationBoundingRect;
    unsigned long long _animationType;
    NSLayoutManager *_destinationLayoutManager;
    NSTextStorage *_destinationTextStorage;
    double _destinationVerticalDelta;
    struct _NSRange { unsigned long long location; unsigned long long length; } _destinationGlyphRange;
    NSLayoutManager *_layoutManager;
}

@property (class, readonly) NSSet *_validCoreTextRenderingAttributes;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, weak) NSLayoutManager *layoutManager;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } characterRange;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sourceBoundingRect;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } destinationBoundingRect;
@property (readonly) unsigned long long animationType;
@property (copy) NSArray *textLineFragments;
@property unsigned long long state;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } layoutFragmentFrame;
@property (getter=_isRenderingAttributesValidated) BOOL _renderingAttributesValidated;
@property BOOL rendersTextCorrectionMarkers;
@property (readonly) NSTextParagraph *textParagraph;
@property (readonly) NSTextLayoutManager *textLayoutManager;
@property (readonly) NSTextElement *textElement;
@property (readonly) NSTextRange *rangeInElement;
@property (retain) NSOperationQueue *layoutQueue;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } renderingSurfaceBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, getter=isCountableDataSource) BOOL countableDataSource;
@property (readonly) id<NSTextLocation> baseLocation;
@property (readonly) NSTextRange *representedRange;
@property (readonly) struct CGSize { double x0; double x1; } layoutSize;
@property struct CGPoint { double x; double y; } layoutPoint;

+ (id)layoutFragmentQueue;

- (void)invalidateLayout;
- (void)_layout;
- (void)_setup;
- (id)init;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })characterRange;
- (id)layoutManager;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (unsigned long long)animationType;
- (void)setTextElement:(id)a0;
- (void)setTextLayoutManager:(id)a0;
- (id)textElement;
- (id)textLayoutManager;
- (id)rangeInElement;
- (void)drawAtPoint:(struct CGPoint { double x0; double x1; })a0 context:(struct CGContext { } *)a1;
- (long long)offsetFromLocation:(id)a0 toLocation:(id)a1;
- (id)locationFromLocation:(id)a0 offset:(long long)a1;
- (id)_layoutContextForTextAttachmentAtLocation:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sourceBoundingRect;
- (id)textParagraph;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })destinationBoundingRect;
- (id)_coreTextAttributes;
- (void)setRenderingAttribute:(id)a0 value:(id)a1 forTextRange:(id)a2;
- (void)enumerateRenderingAttributesFromLocation:(id)a0 reverse:(BOOL)a1 usingBlock:(id /* block */)a2;
- (double)verticalOffsetOfTextLocation:(id)a0 withAffinity:(long long)a1;
- (id)representedRangeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)estimateSize;
- (id)initWithTextElement:(id)a0 range:(id)a1;
- (struct CGPoint { double x0; double x1; })layoutFragmentFrameOrigin;
- (void)setLayoutFragmentFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)addRenderingAttribute:(id)a0 value:(id)a1 forTextRange:(id)a2;
- (void)removeRenderingAttribute:(id)a0 forTextRange:(id)a1;
- (void)setRenderingAttributes:(id)a0 forTextRange:(id)a1;
- (void)invalidateRenderingAttributesForTextRange:(id)a0;
- (void)layoutManagerDidSetTemporaryAttributes:(id)a0 forTextRange:(id)a1;
- (id)_resolvedRenderingAttributesForCharacterIndex:(long long)a0 effectiveRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)destinationLayoutManager;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })destinationGlyphRange;
- (double)destinationVerticalDelta;
- (id)initWithLayoutManager:(id)a0 characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 animationType:(unsigned long long)a2 boundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)setDestinationLayoutManager:(id)a0;
- (id)destinationTextStorage;
- (void)setDestinationTextStorage:(id)a0;
- (void)setDestinationGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setDestinationVerticalDelta:(double)a0;
- (void)setDestinationBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawAtPoint:(struct CGPoint { double x0; double x1; })a0 contentType:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
