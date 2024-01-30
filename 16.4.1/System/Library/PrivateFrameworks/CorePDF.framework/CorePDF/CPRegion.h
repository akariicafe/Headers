@interface CPRegion : CPChunk {
    BOOL isTextRegion;
    BOOL isImageRegion;
    BOOL isCompoundShape;
    CPRegion *nextRegion;
    int order;
    id link;
}

- (int)order;
- (void)setOrder:(int)a0;
- (id)link;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setLink:(id)a0;
- (BOOL)isRotated;
- (BOOL)isTextRegion;
- (void)accept:(id)a0;
- (BOOL)isCompoundShape;
- (BOOL)isBodyZone;
- (BOOL)isBoxRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isImageRegion;
- (BOOL)isIndivisible;
- (BOOL)isListItemRegion;
- (BOOL)isParagraphRegion;
- (BOOL)isRowRegion;
- (BOOL)isShapeRegion;
- (BOOL)isTableCellRegion;
- (BOOL)isZone;
- (id)nextRegion;
- (void)setIsCompoundShape:(BOOL)a0;
- (void)setIsImageRegion:(BOOL)a0;
- (void)setIsTextRegion:(BOOL)a0;
- (void)setNextRegion:(id)a0;

@end
