@class NSLayoutManager, NSString, NSTextContainer, _UITextLayoutController, NSDictionary, _UITextViewCanvasView, UITextView, UIColor;
@protocol _UITextContainerViewDelegate;

@interface _UITextContainerView : UIView <NSUITextViewCommonMethods, _UITextViewCanvasViewContext> {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _textContainerInset;
    struct CGPoint { double x; double y; } _textContainerOrigin;
    NSDictionary *_linkTextAttributes;
    unsigned long long _invalidationSeqNo;
    long long _invalidationSeqClipsToBounds;
    struct { unsigned char textContainerOriginInvalid : 1; unsigned char verticalLayout : 2; unsigned char horizontallyResizable : 1; unsigned char verticallyResizable : 1; unsigned char freezeTextContainerSize : 1; unsigned char usesStandardTextScaling : 1; } _tcvFlags;
    UITextView *_textView;
}

@property (weak, nonatomic) NSTextContainer *textContainer;
@property (readonly, nonatomic) _UITextLayoutController *textLayoutController;
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
@property (readonly, nonatomic) NSLayoutManager *layoutManager;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } markedRange;
@property (readonly, nonatomic) NSDictionary *markedTextStyle;
@property (readonly, nonatomic) long long layoutOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } textContainerOrigin;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } drawingScale;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _clipRectForFadedEdges;

- (id)layoutManager:(id)a0 effectiveCUICatalogForTextEffect:(id)a1;
- (void)addGhostedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeAllGhostedRanges;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateTextContainerOrigin;
- (id)attributedSubstringForMarkedRange;
- (id)textStorage;
- (void)updateInsertionPointStateAndRestartTimer:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 avoidAdditionalLayout:(BOOL)a1;
- (void)setConstrainedFrameSize:(struct CGSize { double x0; double x1; })a0;
- (id)linkTextAttributes;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;
- (id)linkAttributesForLink:(id)a0 forCharacterAtIndex:(unsigned long long)a1;
- (void)_ensureLayoutCompleteForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_ensureLayoutCompleteToEndOfCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setLayoutOrientation:(long long)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setNeedsContentsFormatUpdate;
- (void).cxx_destruct;
- (void)_ensureMinAndMaxSizesConsistentWithBounds;
- (void)_sizeToConstrainedContainerUsedRect;
- (void)_setFrameOrBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 oldRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isFrameRect:(BOOL)a2 settingAction:(id /* block */)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textLayoutController:(id)a1 textContainer:(id)a2 delegate:(id)a3;
- (BOOL)_shouldCapSizeToFitLayoutRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)setNeedsDisplay;
- (void)tintColorDidChange;
- (void)setBackgroundColor:(id)a0;
- (void)sizeToFit;

@end
