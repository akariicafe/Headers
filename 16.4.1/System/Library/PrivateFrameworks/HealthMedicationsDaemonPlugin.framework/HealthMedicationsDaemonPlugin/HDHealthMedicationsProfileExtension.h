@class HDAnalyticsDailyEventManager, NSString, HDMedicationNanoSyncTriggerManager, HDMedicationDoseEventObserver, HDPrimaryProfile, HDMedicationScheduleManager, HDMedicationsWidgetSchedulingManager;

@interface HDHealthMedicationsProfileExtension : NSObject <HDProfileExtension> {
    HDAnalyticsDailyEventManager *_medicationDailyAnalyticsManager;
}

@property (readonly, weak, nonatomic) HDPrimaryProfile *profile;
@property (readonly, nonatomic) HDMedicationScheduleManager *medicationScheduleManager;
@property (readonly, nonatomic) HDMedicationDoseEventObserver *medicationDoseEventObserver;
@property (readonly, nonatomic) HDMedicationNanoSyncTriggerManager *medicationNanoSyncTriggerManager;
@property (readonly, nonatomic) HDMedicationsWidgetSchedulingManager *widgetSchedulingManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
