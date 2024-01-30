@class PLXPCResponderOperatorComposition, NSMutableDictionary, NSDictionary, PLEntryNotificationOperatorComposition, NSDate, PLXPCListenerOperatorComposition, NSString;

@interface PLCoalitionAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) NSDictionary *lastCoalitionDictionary;
@property (retain) NSDictionary *lastCoalitionObjectDictionary;
@property (retain) NSDate *lastDate;
@property (retain) NSDate *currentDate;
@property (retain) PLEntryNotificationOperatorComposition *processmonitorCallback;
@property (retain) PLXPCListenerOperatorComposition *coalitionReapNotification;
@property (retain) NSMutableDictionary *reapedCoalitions;
@property (retain) NSMutableDictionary *coalitionIDToCoalitionNameMapping;
@property (retain) NSString *driveCapacity;
@property (retain) PLXPCResponderOperatorComposition *CoalitionForSysdiagnoseResponder;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventIntervalDefinitionCoalitionUsage;
+ (id)entryEventPointDefinitionCoalitionDrop;
+ (id)entryEventPointDefinitionCoalitionSnapshot;
+ (id)entryEventPointDefinitionCoalitionMemory;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventIntervalCoalitionIntervalWithHFLFlag:(BOOL)a0;
- (void)handleReapNotifications:(id)a0;
- (void)getStorageCapacity;
- (unsigned long long)readPropertyFromRegistry:(struct __CFString { } *)a0;
- (void)timedCoalitionInfo;
- (void)logToAggd:(id)a0;
- (id)buildPLEntry:(struct coalition_resource_usage { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24[7]; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; } *)a0 withBundleId:(id)a1 withLaunchdName:(id)a2 withDate:(id)a3 withCoalitionId:(unsigned long long)a4;
- (id)buildPLEntryDiffWithStartEntry:(id)a0 withEndEntry:(id)a1 withLastDate:(id)a2;
- (BOOL)shouldLogCoalitionObject:(id)a0 withEndObject:(id)a1;
- (id)buildPLEntryDiffWithStartObject:(id)a0 withEndObject:(id)a1 withStartDate:(id)a2 withEndDate:(id)a3;
- (id)reapedCoalitionsPLEntryDiff;
- (void)addAccountingEventsFromCoalitions:(id)a0;
- (double)getCPUWeightFromEntry:(id)a0;
- (double)getGPUTimeFromEntry:(id)a0;
- (double)getCPUEnergyFromEntry:(id)a0;
- (double)getCPUVoucherTimeFromEntry:(id)a0;
- (void)getCoalitionInfoWithHFLFlag:(BOOL)a0;
- (id)buildPLCoalitionDataObject:(struct coalition_resource_usage { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24[7]; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; } *)a0 withBundleId:(id)a1 withLaunchdName:(id)a2 withDate:(id)a3 withCoalitionId:(unsigned long long)a4;
- (void)logCoalitionObjectDifference:(id)a0;
- (void)logCoalitionObjectSnapshot:(id)a0;
- (void)logCoalitionObjectMemory:(id)a0;
- (id)buildPLCoalitionDataObjectFromReapedNotification:(id)a0;
- (void)debugCoalitionAgent;
- (void)printCoalitionResourceUsage:(struct coalition_resource_usage { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24[7]; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; } *)a0 withBundleId:(id)a1 withLaunchdName:(id)a2;
- (void)logCoalitionSnapshot:(id)a0;
- (id)filterCoalitionDiffEntries:(id)a0;
- (void)logCoalitionDifference:(id)a0;

@end
