@class NSObject, NSString, EKEventStore;
@protocol OS_os_log, PowerUISignalMonitorDelegate;

@interface PowerUICalendarSignalMonitor : NSObject <PowerUISignalMonitor>

@property (retain, nonatomic) EKEventStore *calendar;
@property (retain, nonatomic) id<PowerUISignalMonitorDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)monitorWithDelegate:(id)a0;
+ (id)monitorWithDelegate:(id)a0 trialManager:(id)a1 withContext:(id)a2 withKnowledgeStore:(id)a3;

- (unsigned long long)signalID;
- (void)sourceInformationChangedNotification:(id)a0;
- (void)startMonitoring;
- (void).cxx_destruct;
- (void)stopMonitoring;
- (id)requiredFullChargeDate;
- (id)upcomingEvents;
- (id)initWithDelegate:(id)a0 trialManager:(id)a1 withContext:(id)a2 withKnowledgeStore:(id)a3;
- (id)nextFlightEventWithEvents:(id)a0;
- (id)nextRelevantDeadlineWithEvents:(id)a0;

@end
