@interface CHDBar2DType : CHDChartTypeWithGrouping {
    int mGapWidth;
    BOOL mColumn;
    int mOverlap;
}

- (int)overlap;
- (void)setOverlap:(int)a0;
- (int)gapWidth;
- (void)setGapWidth:(int)a0;
- (BOOL)isHorizontal;
- (void)setColumn:(BOOL)a0;
- (id)initWithChart:(id)a0;
- (BOOL)isColumn;
- (int)defaultLabelPosition;

@end
