@class NSArray;

@interface CalendarOccurrencesCollection : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *occurrences;
@property (readonly, nonatomic) NSArray *allDayOccurrences;
@property (readonly, nonatomic) NSArray *timedOccurrences;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithOccurrences:(id)a0 timedOccurrences:(id)a1 allDayOccurrences:(id)a2;

@end
