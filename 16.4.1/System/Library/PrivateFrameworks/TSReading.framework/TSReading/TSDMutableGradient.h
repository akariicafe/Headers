@class NSArray, NSString, TSUColor;

@interface TSDMutableGradient : TSDGradient <TSDGradientStopContainer>

@property (retain, nonatomic) NSArray *gradientStops;
@property (nonatomic) unsigned long long gradientType;
@property (nonatomic) double opacity;
@property (nonatomic) BOOL isAdvancedGradient;
@property (retain, nonatomic) TSUColor *firstColor;
@property (retain, nonatomic) TSUColor *lastColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setGradientType:(unsigned long long)a0;
- (id)insertStopAtFraction:(double)a0 withColor:(id)a1;
- (void)evenlyDistributeStops;
- (void)insertGradientStop:(id)a0;
- (id)insertStopAtFraction:(double)a0;
- (void)moveStopAtIndex:(unsigned long long)a0 toFraction:(double)a1;
- (void)removeStop:(id)a0;
- (id)removeStopAtIndex:(unsigned long long)a0;
- (void)reverseStopOrder;
- (void)setColorOfStopAtIndex:(unsigned long long)a0 toColor:(id)a1;
- (void)setFraction:(double)a0 ofStopAtIndex:(unsigned long long)a1;
- (void)setGradientStops:(id)a0;
- (void)setInflectionOfStopAtIndex:(unsigned long long)a0 toInflection:(double)a1;
- (void)swapStopAtIndex:(unsigned long long)a0 withStopAtIndex:(unsigned long long)a1;

@end
