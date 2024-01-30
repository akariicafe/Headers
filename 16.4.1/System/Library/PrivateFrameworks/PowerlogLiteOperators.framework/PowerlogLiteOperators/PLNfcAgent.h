@class PLTimer, PLXPCListenerOperatorComposition, NSDate, PLEntryNotificationOperatorComposition;

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
@property (retain) PLTimer *nfcConnectionRetryTimer;
@property int nfcConnectionRetryCount;

+ (id)entryEventForwardDefinitions;
+ (id)defaults;
+ (void)load;
+ (id)entryEventIntervalDefinitionAccessoryPower;
+ (id)entryEventIntervalDefinitions;
+ (id)parseLPEMFromData:(id)a0;
+ (id)entryEventForwardDefinitionField;
+ (id)entryEventIntervalDefinitionPower;
+ (id)entryEventForwardDefinitionTransaction;
+ (id)entryEventForwardDefinitionTSMCommunication;
+ (id)entryEventForwardDefinitionCard;
+ (id)entryEventForwardDefinitionLPEM;

- (void)initOperatorDependancies;
- (void)fieldChangedWithEntry:(id)a0;
- (void)retrieveAndLogNfcAccessoryPowerCountersWithRetry:(BOOL)a0;
- (unsigned int)getNFCHarwareState;
- (void)setUpNfcPowerCounterRetrieval;
- (void)logEventForwardLPEM;
- (void)initTaskOperatorDependancies;
- (void)retrieveAndLogNfcPowerCountersWithRetry:(BOOL)a0;
- (id)init;
- (void)setupLPEMCounter;
- (void)setupNfcAccessoryPowerCounterRetrieval;
- (void).cxx_destruct;

@end
