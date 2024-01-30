@interface ECColumnWidthConvertor : NSObject {
    int mMultiplier;
}

- (float)fontWidthAdjustmentFor:(id)a0;
- (double)lassoColumnWidthFromXl:(double)a0;
- (void)setupWithEDFont:(id)a0 state:(id)a1;
- (struct CGSize { double x0; double x1; })stringSizeWithFont:(id)a0 edFont:(id)a1 drawingState:(id)a2;
- (double)xlColumnWidthFromLasso:(double)a0;
- (double)xlColumnWidthFromXlBaseColumnWidth:(double)a0;

@end
