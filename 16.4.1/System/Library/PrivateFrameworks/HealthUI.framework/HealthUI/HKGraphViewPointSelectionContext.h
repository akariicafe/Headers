@class HKGraphSeries, NSArray, NSDateComponents, HKValueRange;

@interface HKGraphViewPointSelectionContext : NSObject

@property (retain, nonatomic) HKGraphSeries *selectedSeries;
@property (retain, nonatomic) HKValueRange *selectedRangeXValues;
@property (retain, nonatomic) HKValueRange *selectedPathIndexRange;
@property (retain, nonatomic) HKValueRange *selectedPointValueRange;
@property (retain, nonatomic) NSDateComponents *pointIntervalComponents;
@property (retain, nonatomic) NSArray *userInfo;

- (id)debugDescription;
- (void).cxx_destruct;

@end
