@class NSArray;

@interface CalendarOccurrencesCollection : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *occurrences;
@property (readonly, nonatomic) NSArray *allDayOccurrences;
@property (readonly, nonatomic) NSArray *timedOccurrences;
@property (nonatomic) int generation;

- (id)initWithOccurrences:(id)a0 timedOccurrences:(id)a1 allDayOccurrences:(id)a2 generation:(int)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOccurrences:(id)a0 timedOccurrences:(id)a1 allDayOccurrences:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
