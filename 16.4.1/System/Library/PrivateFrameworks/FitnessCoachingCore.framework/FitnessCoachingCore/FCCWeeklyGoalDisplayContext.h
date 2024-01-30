@class NSDate;

@interface FCCWeeklyGoalDisplayContext : NSObject

@property (readonly, nonatomic) unsigned long long displayCount;
@property (readonly, nonatomic) NSDate *lastDisplayDate;

- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDisplayCount:(long long)a0 lastDisplayDate:(id)a1;

@end
