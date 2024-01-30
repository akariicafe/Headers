@class NSLayoutManager, NSString, NSTextContainer, UITextView, NSDictionary, _UITextViewCanvasView, NSTextStorage, UIColor;
@protocol _UITextContainerViewDelegate;

@interface _UITextContainerView : UIView <NSUITextViewCommonMethods, _UITextViewCanvasViewContext> {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _textContainerInset;
    struct CGPoint { double x; double y; } _textContainerOrigin;
    NSDictionary *_linkTextAttributes;
    unsigned long long _invalidationSeqNo;
    long long _invalidationSeqClipsToBounds;
    struct { unsigned char textContainerOriginInvalid : 1; unsigned char verticalLayout : 2; unsigned char horizontallyResizable : 1; unsigned char verticallyResizable : 1; unsigned char freezeTextContainerSize : 1; unsigned char usesStandardTextScaling : 1; } _tcvFlags;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _constrainedTiledRenderingRect;
    UITextView *_textView;
}

@property (weak, nonatomic) NSTextContainer *textContainer;
@property (readonly, nonatomic) NSTextStorage *textStorage;
@property (readonly, nonatomic) NSLayoutManager *layoutManager;
@property (weak, nonatomic) id<_UITextContainerViewDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } textContainerInset;
@property (nonatomic, getter=isHorizontallyResizable) BOOL horizontallyResizable;
@property (nonatomic, getter=isVerticallyResizable) BOOL verticallyResizable;
@property (nonatomic) struct CGSize { double width; double height; } minSize;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (nonatomic) BOOL usesTiledViews;
@property (nonatomic) double maxTileHeight;
@property (readonly, nonatomic) _UITextViewCanvasView *canvasView;
@property (nonatomic) BOOL usesStandardTextScaling;
@property (nonatomic, getter=_freezeTextContainerSize, setter=_setFreezeTextContainerSize:) BOOL freezeTextContainerSize;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } markedRange;
@property (readonly, nonatomic) NSDictionary *markedTextStyle;
@property (readonly, nonatomic) long long layoutOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } constrainedTiledRenderingRect;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } textContainerOrigin;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } drawingScale;

- (void)setLayoutOrientation:(long long)a0;
- (void)willMoveToSuperview:(id)a0;
- (void)tintColorDidChange;
- (void)addGhostedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_ensureLayoutCompleteForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)sizeToFit;
- (id)layoutManager:(id)a0 effectiveCUICatalogForTextEffect:(id)a1;
- (void)setConstrainedFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)removeAllGhostedRanges;
- (BOOL)_shouldCapSizeToFitLayoutRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (void)setNeedsDisplay;
- (void)setBackgroundColor:(id)a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_unconstrainTiledRendering;
- (void)_constrainTiledRenderingToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_ensureMinAndMaxSizesConsistentWithBounds;
- (void)updateInsertionPointStateAndRestartTimer:(BOOL)a0;
- (id)linkAttributesForLink:(id)a0 forCharacterAtIndex:(unsigned long long)a1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 avoidAdditionalLayout:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_sizeToConstrainedContainerUsedRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_intersectRectWithConstrainedTiledRenderingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1 delegate:(id)a2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_ensureLayoutCompleteToEndOfCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)invalidateTextContainerOrigin;
- (void)_setFrameOrBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 oldRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isFrameRect:(BOOL)a2 settingAction:(id /* block */)a3;
- (id)linkTextAttributes;
- (id)attributedSubstringForMarkedRange;
- (void)_setNeedsContentsFormatUpdate;

@end
