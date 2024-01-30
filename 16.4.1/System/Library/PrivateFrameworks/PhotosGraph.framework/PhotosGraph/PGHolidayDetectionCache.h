@class NSMutableArray;

@interface PGHolidayDetectionCache : NSObject

@property (readonly, nonatomic) NSMutableArray *holidayDateNodes;
@property (readonly, nonatomic) NSMutableArray *positivelyClassifiedMomentNodes;
@property (readonly, nonatomic) NSMutableArray *negativelyClassifiedMomentNodes;

- (id)init;
- (void).cxx_destruct;
- (void)addHolidayWithDateNode:(id)a0;
- (void)addNegativelyClassifiedMomentNode:(id)a0;
- (void)addPositivelyClassifiedMomentNode:(id)a0;

@end
