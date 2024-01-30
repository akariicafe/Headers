@interface PDAnimationOleChartTarget : PDAnimationShapeTarget {
    int mLevel;
    int mChartSubElementType;
}

- (void)setLevel:(int)a0;
- (int)level;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)setChartSubElementType:(int)a0;
- (int)chartSubElementType;

@end
