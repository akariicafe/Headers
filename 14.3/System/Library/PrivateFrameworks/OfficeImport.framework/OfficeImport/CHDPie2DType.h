@interface CHDPie2DType : CHDChartType {
    int mFirstSliceAngle;
    BOOL mDoughnutType;
    BOOL mPieOfPieType;
    BOOL mBarOfPieType;
}

- (id)contentFormat;
- (BOOL)isDoughnutType;
- (id)initWithChart:(id)a0;
- (void)setFirstSliceAngle:(int)a0;
- (void)setDoughnutType:(BOOL)a0;
- (void)setPieOfPieType:(BOOL)a0;
- (void)setBarOfPieType:(BOOL)a0;
- (int)defaultLabelPosition;
- (int)firstSliceAngle;
- (BOOL)isPieOfPieType;
- (BOOL)isBarOfPieType;
- (BOOL)hasExplosion;

@end
