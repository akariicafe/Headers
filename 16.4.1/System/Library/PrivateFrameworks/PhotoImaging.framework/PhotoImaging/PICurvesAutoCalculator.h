@class NSString;

@interface PICurvesAutoCalculator : NUAutoCalculator <NUTimeBased>

@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_defaultCurveArray;
+ (id)autoValuesForBlackPoint:(double)a0 whitePoint:(double)a1;
+ (id)dictionariesFromPoints:(id)a0;

- (void)submit:(id /* block */)a0;
- (id)computeCurvesForImageHistogram:(id)a0;

@end
