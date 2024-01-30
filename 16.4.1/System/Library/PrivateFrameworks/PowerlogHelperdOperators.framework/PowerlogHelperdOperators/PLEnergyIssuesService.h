@class PLXPCListenerOperatorComposition, NSString;

@interface PLEnergyIssuesService : PLService

@property (retain) PLXPCListenerOperatorComposition *eventListener;
@property (retain) PLXPCListenerOperatorComposition *xpcListenerEnergyIssueTrigger;
@property (retain) NSString *entryKeyForEnergyIssues;

+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitionEnergySignatures;

- (void)initOperatorDependancies;
- (id)init;
- (void).cxx_destruct;
- (struct __CFDictionary { } *)createAssertionThreshold:(int)a0 withAggregateLimit:(int)a1;
- (void)handleAssertionNotifications;
- (void)setAssertionThresholds;

@end
