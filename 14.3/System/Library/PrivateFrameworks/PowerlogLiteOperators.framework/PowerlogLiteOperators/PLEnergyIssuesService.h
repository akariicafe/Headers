@class PLXPCListenerOperatorComposition, NSString;

@interface PLEnergyIssuesService : PLService

@property (retain) PLXPCListenerOperatorComposition *eventListener;
@property (retain) PLXPCListenerOperatorComposition *xpcListenerEnergyIssueTrigger;
@property (retain) NSString *entryKeyForEnergyIssues;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionEnergySignatures;

- (id)init;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)setAssertionThresholds;
- (struct __CFDictionary { } *)createAssertionThreshold:(int)a0 withAggregateLimit:(int)a1;
- (void)handleAssertionNotifications;

@end
