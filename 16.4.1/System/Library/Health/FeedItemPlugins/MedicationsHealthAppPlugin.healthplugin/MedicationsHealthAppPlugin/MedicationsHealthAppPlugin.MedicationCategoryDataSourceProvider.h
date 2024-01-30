@interface MedicationsHealthAppPlugin.MedicationCategoryDataSourceProvider : NSObject {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ timelineDataProvider;
    void /* unknown type, empty encoding */ listManager;
    void /* unknown type, empty encoding */ analyticsManager;
    void /* unknown type, empty encoding */ hidableRoomDataSource;
    void /* unknown type, empty encoding */ timeZoneDataSource;
    void /* unknown type, empty encoding */ hasMedicationsCancellable;
    void /* unknown type, empty encoding */ hasActiveMedicationsCancellable;
    void /* unknown type, empty encoding */ _currentDate;
    void /* unknown type, empty encoding */ _currentDayDoseEvents;
    void /* unknown type, empty encoding */ _currentDayScheduleItems;
    void /* unknown type, empty encoding */ _onboardingCompleted;
}

- (id)init;
- (void).cxx_destruct;

@end
