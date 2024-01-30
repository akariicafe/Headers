@class NSString;

@interface HKJulianIndexedSevenDayQuantitySeriesAxisLabel : NSObject

@property (readonly, nonatomic) double location;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (id)initWithText:(id)a0 location:(double)a1;
- (id)initWithText:(id)a0 location:(double)a1 type:(long long)a2;

@end
