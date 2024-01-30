@class NSObject, HDProfile, NSDateComponents, NSDate, HDRestorableAlarm;
@protocol OS_dispatch_queue;

@interface HDTinkerPrivacyAlertCoordinator : NSObject {
    HDProfile *_profile;
    HDRestorableAlarm *_scheduler;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) NSDate *_unitTest_currentDate;
@property (readonly, nonatomic) NSDateComponents *_unitTest_scheduledBirthdayTransparencyAlertComponents;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)allScheduledEvents:(id *)a0;
- (BOOL)_unitTest_scheduleTransparencyAlertIfRequiredForBirthdate:(id)a0 error:(id *)a1;
- (BOOL)_queue_scheduleTransparencyAlertIfRequiredForBirthdate:(id)a0 error:(id *)a1;
- (BOOL)scheduleEventIfRequiredForDateComponents:(id)a0 eventIdentifier:(id)a1 error:(id *)a2;
- (BOOL)removeAllEventsWithError:(id *)a0;
- (void)_userCharacteristicsDidChangeNotification:(id)a0;
- (void)_queue_clearDueEvents:(id)a0;
- (BOOL)_queue_showAlertIfRequiredForDueEvents:(id)a0 error:(id *)a1;
- (id)allScheduledDueDates:(id *)a0;
- (BOOL)_shouldScheduleTransparencyAlertsWithError:(id *)a0;
- (BOOL)_shouldEnableTransparencyAlertsWithError:(id *)a0;
- (BOOL)_queue_alarm:(id)a0 didReceiveDueEvents:(id)a1;
- (BOOL)_queue_scheduleEventIfRequiredForDateComponents:(id)a0 eventIdentifier:(id)a1 error:(id *)a2;
- (BOOL)_unitTest_didReceiveDueEvents:(id)a0;

@end
