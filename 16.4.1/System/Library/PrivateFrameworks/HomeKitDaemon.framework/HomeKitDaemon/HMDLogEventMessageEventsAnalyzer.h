@class NSUserDefaults, HMDEventCounterGroup, HMDEventCountersManager;
@protocol HMMLogEventSubmitting;

@interface HMDLogEventMessageEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property double lastRemoteMessageEventsPeriodicSubmissionTime;
@property double lastXPCMessageEventsPeriodicSubmissionTime;
@property (readonly) unsigned long long periodicLoggingInterval;
@property (readonly, nonatomic) HMDEventCounterGroup *residentSyncGroup;
@property (readonly, nonatomic) HMDEventCounterGroup *homeManagerMessagesGroup;
@property (copy) id /* block */ dateFactory;
@property (retain) NSUserDefaults *userDefaults;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)resetAggregationAnalysisContext;
- (void)_handleRemoteMessageLogEvent:(id)a0;
- (void)_handleXPCMessageCounterLogEvent:(id)a0;
- (void)_updateDailySubmissionGroupRemoteMessageEventCountersForTransportType:(int)a0 messageDirectionSending:(BOOL)a1;
- (void)_updatePeriodicSubmissionGroupRemoteMessageEventCountersForMessageName:(id)a0 peerInformation:(id)a1 transportType:(int)a2 messageDirectionSending:(BOOL)a3 identifier:(id)a4;
- (void)_updateResidentSyncCountersWithRemoteMessageLogEvent:(id)a0;
- (id)initWithEventCountersManager:(id)a0 logEventSubmitter:(id)a1;
- (id)initWithEventCountersManager:(id)a0 logEventSubmitter:(id)a1 userDefaults:(id)a2;
- (id)messageDirectionStringForRemoteMessageCounterRequestGroup:(id)a0;
- (id)periodicRemoteMessageCounterEventNameWithMessageName:(id)a0 peerInformation:(id)a1;
- (void)populateAggregationAnalysisLogEvent:(id)a0;
- (void)submitPeriodicAggregateCountersForRemoteMessageCounterRequestGroup:(id)a0;
- (void)submitPeriodicAggregateCountersForXPCMessageCounterRequestGroup:(id)a0;
- (void)submitPeriodicRemoteMessageCountersLogEventIfNeeded;
- (void)submitPeriodicXPCMessageCountersLogEventIfNeeded;
- (id)transportTypeStringForRemoteMessageCounterRequestGroup:(id)a0;

@end
