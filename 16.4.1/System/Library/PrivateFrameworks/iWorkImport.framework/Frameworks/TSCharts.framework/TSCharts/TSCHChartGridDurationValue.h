@class NSString;

@interface TSCHChartGridDurationValue : NSObject <TSCHChartGridValue> {
    double _duration;
}

@property (readonly, nonatomic) int chartGridValueType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)durationValueWithDouble:(double)a0;

- (double)doubleValue;
- (id)initWithDouble:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
