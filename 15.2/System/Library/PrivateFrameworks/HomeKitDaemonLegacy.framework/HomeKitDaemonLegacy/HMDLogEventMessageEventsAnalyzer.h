@class HMDEventFlagsManager, HMDEventCountersManager;
@protocol HMMLogEventSubmitting;

@interface HMDLogEventMessageEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property (readonly, nonatomic) HMDEventFlagsManager *eventFlagsManager;
@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) unsigned long long periodicLoggingInterval;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)populateAggregationAnalysisLogEvent:(id)a0;
- (void)resetAggregationAnalysisContext;
- (id)initWithEventCountersManager:(id)a0 eventFlagsManager:(id)a1 logEventSubmitter:(id)a2;
- (void)submitPeriodicAggregateCountersForXPCMessageCounterRequestGroup:(id)a0;
- (id)transportTypeStringForRemoteMessageCounterRequestGroup:(id)a0;
- (id)messageDirectionStringForRemoteMessageCounterRequestGroup:(id)a0;
- (void)submitPeriodicAggregateCountersForRemoteMessageCounterRequestGroup:(id)a0;
- (void)submitPeriodicXPCMessageCountersLogEventIfNeeded;
- (void)submitPeriodicRemoteMessageCountersLogEventIfNeeded;
- (id)periodicRemoteMessageCounterEventNameWithMessageName:(id)a0 peerInformation:(id)a1;
- (void)_handleRemoteMessageLogEvent:(id)a0;
- (void)_updateDailySubmissionGroupRemoteMessageEventCountersForTransportType:(int)a0 messageDirectionSending:(BOOL)a1;
- (void)_updatePeriodicSubmissionGroupRemoteMessageEventCountersForMessageName:(id)a0 peerInformation:(id)a1 transportType:(int)a2 messageDirectionSending:(BOOL)a3 identifier:(id)a4;
- (void)_handleXPCMessageCounterLogEvent:(id)a0;

@end
