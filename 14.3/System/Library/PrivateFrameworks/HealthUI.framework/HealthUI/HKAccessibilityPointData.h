@class NSString, NSArray, NSDate;

@interface HKAccessibilityPointData : NSObject

@property (readonly, nonatomic) double horizontalScreenCoordinate;
@property (readonly, nonatomic) NSString *horizontalTimeCoordinate;
@property (readonly, nonatomic) NSDate *horizontalDate;
@property (readonly, nonatomic) NSArray *values;

- (void).cxx_destruct;
- (id)description;
- (id)initWithHorizontalScreenCoordinate:(double)a0 horizontalTimeCoordinate:(id)a1 horizontalDate:(id)a2 values:(id)a3;

@end
