@class NSDate;

@interface PLCoreDuetEventInterval : NSObject

@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;

- (id)joinWithInterval:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)intersects:(id)a0;

@end
