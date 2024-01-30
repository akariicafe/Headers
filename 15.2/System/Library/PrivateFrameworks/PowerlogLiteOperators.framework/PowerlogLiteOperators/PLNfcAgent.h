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

+ (id)defaults;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventIntervalDefinitionPower;
+ (id)entryEventForwardDefinitionField;
+ (id)entryEventForwardDefinitions;
+ (id)parseLPEMFromData:(id)a0;
+ (id)entryEventForwardDefinitionTransaction;
+ (void)load;
+ (id)entryEventForwardDefinitionTSMCommunication;
+ (id)entryEventForwardDefinitionCard;
+ (id)entryEventIntervalDefinitionAccessoryPower;
+ (id)entryEventForwardDefinitionLPEM;

- (unsigned int)getNFCHarwareState;
- (void)setUpNfcPowerCounterRetrieval;
- (void)setupNfcAccessoryPowerCounterRetrieval;
- (void)fieldChangedWithEntry:(id)a0;
- (void)retrieveAndLogNfcPowerCountersWithRetry:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupLPEMCounter;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void)retrieveAndLogNfcAccessoryPowerCountersWithRetry:(BOOL)a0;
- (void)logEventForwardLPEM;

@end
