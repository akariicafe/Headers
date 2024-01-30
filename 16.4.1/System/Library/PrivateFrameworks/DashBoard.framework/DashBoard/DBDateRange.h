@class NSDate;

@interface DBDateRange : NSObject

@property (retain, nonatomic) NSDate *start;
@property (retain, nonatomic) NSDate *end;
@property (readonly, nonatomic) double startTimeIntervalSinceReferenceDate;
@property (readonly, nonatomic) double endTimeIntervalSinceReferenceDate;
@property (readonly, nonatomic) BOOL validRange;
@property (readonly, nonatomic) BOOL hasStart;
@property (readonly, nonatomic) BOOL hasEnd;

+ (BOOL)_validDate:(id)a0;

- (BOOL)containsDate:(id)a0;
- (id)initWithStart:(id)a0 end:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
