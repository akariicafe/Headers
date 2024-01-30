@interface CHDLine2DType : CHDLineType {
    BOOL mShowMarker;
    BOOL mStockType;
}

- (id)initWithChart:(id)a0;
- (BOOL)showMarker;
- (void)setShowMarker:(BOOL)a0;
- (BOOL)isStockType;
- (void)setStockType:(BOOL)a0;

@end
