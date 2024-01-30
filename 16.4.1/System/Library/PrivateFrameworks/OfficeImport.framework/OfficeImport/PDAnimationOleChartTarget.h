@interface PDAnimationOleChartTarget : PDAnimationShapeTarget {
    int mLevel;
    int mChartSubElementType;
}

- (void)setLevel:(int)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (int)level;
- (int)chartSubElementType;
- (void)setChartSubElementType:(int)a0;

@end
