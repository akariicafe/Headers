@class TSTExpressionNode;

@interface TSTWPTokenAttachment : TSWPUIGraphicalAttachment {
    struct CGSize { double width; double height; } mTextSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mMenuRect;
    struct CGImage { } *mCachedImage;
    BOOL mInInvalidate;
}

@property (retain, nonatomic) TSTExpressionNode *expressionNode;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=neverShowsMenu) BOOL neverShowsMenu;
@property (nonatomic) struct CGImage { } *cachedImage;
@property (nonatomic) double cachedImageScreenScale;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)loadFromArchive:(const struct TokenAttachmentArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct UIGraphicalAttachment *x4; struct Reference *x5; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct TokenAttachmentArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct UIGraphicalAttachment *x4; struct Reference *x5; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithContext:(id)a0 expressionNode:(id)a1;
- (id)copyIntoContext:(id)a0 bakeModes:(BOOL)a1;
- (id)detokenizedText;
- (id)formulaPlainText;
- (id)copyIntoContext:(id)a0;
- (void)requestRedraw;

@end
