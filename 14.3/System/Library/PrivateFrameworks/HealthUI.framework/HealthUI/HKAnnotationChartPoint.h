@class NSNumber, NSString, NSDate;

@interface HKAnnotationChartPoint : NSObject <HKChartPoint>

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSNumber *value;
@property (readonly, nonatomic) long long pointType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userInfo;
- (id)minYValue;
- (void).cxx_destruct;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)allYValues;
- (id)maxYValue;
- (id)yValue;
- (id)yValueForKey:(id)a0;
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0 pointType:(long long)a1;

@end
