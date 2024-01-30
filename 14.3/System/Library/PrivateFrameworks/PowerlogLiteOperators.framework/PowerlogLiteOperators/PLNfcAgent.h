@class PLXPCListenerOperatorComposition, NSDate, PLEntryNotificationOperatorComposition;

@interface PLNfcAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *cardNotification;
@property (retain) PLXPCListenerOperatorComposition *fieldNotification;
@property (retain) PLXPCListenerOperatorComposition *transactionNotification;
@property (retain) PLXPCListenerOperatorComposition *tsmCommunicationNotification;
@property (retain) PLEntryNotificationOperatorComposition *nfcPowerCountersNotification;
@property (retain) PLEntryNotificationOperatorComposition *nfcAccessoryPowerCounterNotification;
@property double onPower;
@property (retain) NSDate *lastPowerCountersLogTime;
@property (retain) NSDate *lastAccessoryPowerCountersLogTime;

+ (void)load;
+ (id)entryEventForwardDefinitionField;
+ (id)defaults;
+ (id)entryEventForwardDefinitionTSMCommunication;
+ (id)entryEventForwardDefinitionTransaction;
+ (id)entryEventIntervalDefinitionPower;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitionCard;
+ (id)entryEventIntervalDefinitionAccessoryPower;
+ (id)entryEventForwardDefinitions;

- (id)init;
- (void).cxx_destruct;
- (void)setUpNfcPowerCounterRetrieval;
- (void)initTaskOperatorDependancies;
- (void)retrieveAndLogNfcPowerCountersWithRetry:(BOOL)a0;
- (void)fieldChangedWithEntry:(id)a0;
- (void)retrieveAndLogNfcAccessoryPowerCountersWithRetry:(BOOL)a0;
- (void)setupNfcAccessoryPowerCounterRetrieval;
- (void)initOperatorDependancies;

@end
