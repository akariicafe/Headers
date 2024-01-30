@interface CHDBar2DType : CHDChartTypeWithGrouping {
    int mGapWidth;
    BOOL mColumn;
    int mOverlap;
}

- (int)gapWidth;
- (BOOL)isHorizontal;
- (void)setGapWidth:(int)a0;
- (int)overlap;
- (void)setOverlap:(int)a0;
- (BOOL)isColumn;
- (void)setColumn:(BOOL)a0;
- (int)defaultLabelPosition;
- (id)initWithChart:(id)a0;

@end
