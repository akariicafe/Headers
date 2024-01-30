@class PLEntry, NSArray, NSString, NSDate, PLBatteryUIResponderService;

@interface PLBatteryUIResponseTypeUISOCLevel : NSObject <PLBatteryUIResponseType>

@property (retain) NSDate *start;
@property (retain) NSDate *end;
@property double bucketSize;
@property (retain) NSArray *battEntries;
@property (retain) PLEntry *lastBattEntry;
@property (retain) NSArray *lpmEntries;
@property (retain) PLEntry *lastLPMEntry;
@property (retain) NSArray *resultArray;
@property (retain) PLBatteryUIResponderService *responderService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)result;
- (void)run;
- (void).cxx_destruct;
- (void)configure:(id)a0;
- (void)coalesce;
- (id)entriesInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0 fromEntries:(id)a1;
- (id)getLPMIntervalsSpanningRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (BOOL)dateIntervals:(id)a0 containDate:(id)a1;
- (int)criticalLevel;

@end
