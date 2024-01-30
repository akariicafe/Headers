@interface CPRegion : CPChunk {
    BOOL isTextRegion;
    BOOL isImageRegion;
    BOOL isCompoundShape;
    CPRegion *nextRegion;
    int order;
    id link;
}

- (void)setLink:(id)a0;
- (void)setOrder:(int)a0;
- (BOOL)isTextRegion;
- (BOOL)isRotated;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)link;
- (BOOL)isZone;
- (void)accept:(id)a0;
- (int)order;
- (BOOL)isIndivisible;
- (BOOL)isBoxRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isRowRegion;
- (void)setIsImageRegion:(BOOL)a0;
- (BOOL)isImageRegion;
- (BOOL)isShapeRegion;
- (BOOL)isParagraphRegion;
- (BOOL)isListItemRegion;
- (void)setIsTextRegion:(BOOL)a0;
- (BOOL)isTableCellRegion;
- (BOOL)isBodyZone;
- (BOOL)isCompoundShape;
- (void)setIsCompoundShape:(BOOL)a0;
- (id)nextRegion;
- (void)setNextRegion:(id)a0;

@end
