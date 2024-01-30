@class NSDate;

@interface PLCoreDuetEventInterval : NSObject

@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;

- (id)joinWithInterval:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)intersects:(id)a0;

@end
