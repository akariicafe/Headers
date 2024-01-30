@class NSNumber, NSString;

@interface HKAudiogramChartPoint : NSObject <HKGraphSeriesBlockCoordinateInfo, HKChartPoint>

@property (readonly, nonatomic) NSNumber *xValue;
@property (readonly, nonatomic) NSNumber *yValue;
@property (nonatomic) BOOL isLeftEar;
@property (nonatomic) BOOL isAverage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)axisValueFromFrequency:(double)a0;
+ (double)frequencyFromAxisValue:(double)a0;
+ (id)quantityFromAxisValue:(double)a0;

- (id)userInfo;
- (id)minYValue;
- (void).cxx_destruct;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)allYValues;
- (id)maxYValue;
- (id)yValueForKey:(id)a0;
- (id)initWithFrequency:(double)a0 sensitivity:(double)a1 isLeftEar:(BOOL)a2 isAverage:(BOOL)a3;
- (id)initWithXValue:(double)a0 sensitivity:(double)a1 isLeftEar:(BOOL)a2 isAverage:(BOOL)a3;

@end
