@class PLXPCListenerOperatorComposition, NSString;

@interface PLEnergyIssuesService : PLService

@property (retain) PLXPCListenerOperatorComposition *eventListener;
@property (retain) PLXPCListenerOperatorComposition *xpcListenerEnergyIssueTrigger;
@property (retain) NSString *entryKeyForEnergyIssues;

+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitionEnergySignatures;

- (void).cxx_destruct;
- (id)init;
- (void)initOperatorDependancies;
- (void)setAssertionThresholds;
- (struct __CFDictionary { } *)createAssertionThreshold:(int)a0 withAggregateLimit:(int)a1;
- (void)handleAssertionNotifications;

@end
