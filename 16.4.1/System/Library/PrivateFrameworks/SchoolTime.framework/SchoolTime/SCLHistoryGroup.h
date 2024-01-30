@class NSCalendar, SCLSchedule, NSDate, NSMutableArray;

@interface SCLHistoryGroup : NSObject

@property (readonly, nonatomic) NSDate *referenceDate;
@property (readonly, copy, nonatomic) SCLSchedule *effectiveSchedule;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSMutableArray *items;

+ (id)historyGroupsByPrioritizingSchedule:(id)a0 forDate:(id)a1 inCalendar:(id)a2 items:(id)a3;

- (void).cxx_destruct;
- (BOOL)canContainUnlockHistoryItem:(id)a0;
- (id)initWithEffectiveSchedule:(id)a0 calendar:(id)a1 referenceDate:(id)a2;

@end
