@interface NTKUtilitarianNumbersScene : NTKUtilitarianScene

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 forDevice:(id)a1;
- (void)applyDensity:(unsigned long long)a0;
- (double)getRelativeFractionFromOverallFraction:(double)a0 forIntervalStart:(double)a1 andIntervalEnd:(double)a2;
- (id)scrubbingObscuredCollectionNodes;
- (void)setAlpha:(double)a0 element:(id)a1 index:(int)a2;
- (void)applyTransitionFraction:(double)a0 fromDensity:(unsigned long long)a1 toDensity:(unsigned long long)a2;

@end
