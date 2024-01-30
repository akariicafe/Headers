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

- (id)description;
- (void)invalidate;
- (void)dealloc;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithContext:(id)a0 expressionNode:(id)a1;
- (id)copyIntoContext:(id)a0 bakeModes:(BOOL)a1;
- (id)detokenizedText;
- (id)formulaPlainText;
- (id)copyIntoContext:(id)a0;
- (void)requestRedraw;

@end
