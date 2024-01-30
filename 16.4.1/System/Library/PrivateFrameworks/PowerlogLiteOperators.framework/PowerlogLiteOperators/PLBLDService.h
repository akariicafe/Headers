@class PLXPCResponderOperatorComposition;

@interface PLBLDService : PLBatteryBreakdownService

@property (retain) PLXPCResponderOperatorComposition *batteryBreakdownResponder;
@property (retain) PLXPCResponderOperatorComposition *logBUIResultsResponder;

+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)entryEventPointBLD;

- (void)initOperatorDependancies;
- (id)init;
- (void).cxx_destruct;
- (id)batteryBreakdownWithPayload:(id)a0;
- (id)bldEntryWithBatteryBreakdown:(id)a0;

@end
