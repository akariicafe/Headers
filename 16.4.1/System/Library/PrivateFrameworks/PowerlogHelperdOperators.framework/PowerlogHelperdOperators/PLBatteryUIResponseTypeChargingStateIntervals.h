@class PLEntry, NSMutableDictionary, NSDictionary, NSString, NSDate, PLBatteryUIResponderService;

@interface PLBatteryUIResponseTypeChargingStateIntervals : NSObject <PLBatteryUIResponseProtocol>

@property (retain) NSDate *start;
@property (retain) NSDate *end;
@property struct _PLTimeIntervalRange { double location; double length; } range;
@property (retain) PLEntry *lastBattEntry;
@property (retain) NSMutableDictionary *chargingStateIntervalsDict;
@property (retain) NSDictionary *resultDict;
@property BOOL useBattUIforEC;
@property (retain) PLBatteryUIResponderService *responderService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (id)result;
- (void)configure:(id)a0;
- (id)dependencies;
- (void).cxx_destruct;
- (void)coalesce;
- (id)constructIntervalTuplesFromBattEntries:(id)a0 lastBattEntry:(id)a1 startOfRange:(id)a2 endOfRange:(id)a3;
- (id)constructIntervalTuplesFromEntries:(id)a0 startOfRange:(id)a1 endOfRange:(id)a2;
- (id)differenceBetweenSetAndIntersectingSet:(id)a0 intervalSetB:(id)a1;
- (id)filterIntervals:(id)a0 withThreshold:(double)a1;
- (id)getChargingStateIntervals:(id)a0 forGraphIntervalType:(short)a1;
- (id)intersectionOfTwoSets:(id)a0 intervalSetB:(id)a1;
- (BOOL)isPausedChargingIntervalType:(short)a0;
- (BOOL)isStoppedChargingIntervalType:(short)a0;
- (id)mapChargingStateIntervalsToGraphIntervals:(id)a0;
- (id)mergeIntervals:(id)a0 withTolerance:(double)a1;

@end
