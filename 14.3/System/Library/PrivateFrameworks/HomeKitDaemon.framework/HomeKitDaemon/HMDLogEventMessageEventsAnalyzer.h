@class HMDEventFlagsManager, HMDEventCountersManager;

@interface HMDLogEventMessageEventsAnalyzer : HMDLogEventAnalyzer

@property (readonly) unsigned long long periodicLoggingInterval;
@property (retain, nonatomic) HMDEventFlagsManager *eventFlagsManager;
@property (retain, nonatomic) HMDEventCountersManager *eventCountersManager;

- (void).cxx_destruct;
- (id)initWithSupportedEventTypes:(id)a0 context:(id)a1 eventCountersManager:(id)a2 eventFlagsManager:(id)a3;
- (id)initWithSupportedEventTypes:(id)a0 context:(id)a1;
- (id)transportTypeStringForRemoteMessageCounterRequestGroup:(id)a0;
- (id)messageDirectionStringForRemoteMessageCounterRequestGroup:(id)a0;
- (void)submitPeriodicAggregateCountersForXPCMessageCounterRequestGroup:(id)a0;
- (void)submitPeriodicAggregateCountersForRemoteMessageCounterRequestGroup:(id)a0;
- (void)_handleRemoteMessageLogEvent:(id)a0;
- (void)_handleXPCMessageCounterLogEvent:(id)a0;
- (void)submitPeriodicRemoteMessageCountersLogEventIfNeeded;
- (void)_updateDailySubmissionGroupRemoteMessageEventCountersForTransportType:(int)a0 messageDirectionSending:(BOOL)a1;
- (void)_updatePeriodicSubmissionGroupRemoteMessageEventCountersForMessageName:(id)a0 peerInformation:(id)a1 transportType:(int)a2 messageDirectionSending:(BOOL)a3 identifier:(id)a4;
- (id)periodicRemoteMessageCounterEventNameWithMessageName:(id)a0 peerInformation:(id)a1;
- (void)submitPeriodicXPCMessageCountersLogEventIfNeeded;
- (void)processLogEvent:(id)a0;

@end
