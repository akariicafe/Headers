@class PLXPCResponderOperatorComposition;

@interface PLBLDService : PLBatteryBreakdownService

@property (retain) PLXPCResponderOperatorComposition *batteryBreakdownResponder;
@property (retain) PLXPCResponderOperatorComposition *logBUIResultsResponder;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointBLD;

- (id)init;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (id)batteryBreakdownWithPayload:(id)a0;
- (id)bldEntryWithBatteryBreakdown:(id)a0;

@end
