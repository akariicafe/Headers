@class CPParagraphListItem;

@interface CPParagraph : CPRegion {
    BOOL noIndentation;
    BOOL below;
    unsigned long long alignment;
    BOOL hasDropCap;
    id flowProperties;
    double preformatWidth;
}

@property (retain, nonatomic) CPParagraphListItem *listItem;

- (unsigned long long)index;
- (BOOL)below;
- (void)setAlignment:(unsigned long long)a0;
- (id)init;
- (unsigned long long)alignment;
- (void)accept:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)explode;
- (BOOL)isTextRegion;
- (double)selectionBottom;
- (BOOL)isBoxRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isRowRegion;
- (void)setIsImageRegion:(BOOL)a0;
- (BOOL)isImageRegion;
- (BOOL)isShapeRegion;
- (id)flowProperties;
- (void)setFlowProperties:(id)a0;
- (BOOL)isParagraphRegion;
- (BOOL)isListItemRegion;
- (void)setIsTextRegion:(BOOL)a0;
- (void)setNoIndentation:(BOOL)a0;
- (BOOL)noIndentation;
- (BOOL)hasDropCap;
- (void)setHasDropCap:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })reducedBounds;
- (void)setBelow:(BOOL)a0;
- (BOOL)isPreformattedWithUnitWidth:(double *)a0;

@end
