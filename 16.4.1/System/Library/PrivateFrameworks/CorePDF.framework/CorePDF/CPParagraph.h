@class CPParagraphListItem;

@interface CPParagraph : CPRotatedRegion {
    BOOL noIndentation;
    BOOL below;
    unsigned long long alignment;
    BOOL hasDropCap;
    id flowProperties;
    double preformatWidth;
}

@property (retain, nonatomic) CPParagraphListItem *listItem;

- (unsigned long long)alignment;
- (void)setAlignment:(unsigned long long)a0;
- (unsigned long long)index;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)init;
- (BOOL)isTextRegion;
- (void)accept:(id)a0;
- (void)explode;
- (double)selectionBottom;
- (BOOL)below;
- (id)flowProperties;
- (BOOL)hasDropCap;
- (BOOL)isBoxRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isImageRegion;
- (BOOL)isListItemRegion;
- (BOOL)isParagraphRegion;
- (BOOL)isPreformattedWithUnitWidth:(double *)a0;
- (BOOL)isRowRegion;
- (BOOL)isShapeRegion;
- (BOOL)noIndentation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })reducedBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })renderedBounds;
- (void)setBelow:(BOOL)a0;
- (void)setFlowProperties:(id)a0;
- (void)setHasDropCap:(BOOL)a0;
- (void)setIsImageRegion:(BOOL)a0;
- (void)setIsTextRegion:(BOOL)a0;
- (void)setNoIndentation:(BOOL)a0;

@end
