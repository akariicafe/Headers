@interface HealthMedicationsUI.MedicationChartPoint : NSObject <HKChartPoint> {
    void /* unknown type, empty encoding */ takenCount;
    void /* unknown type, empty encoding */ skippedCount;
    void /* unknown type, empty encoding */ startDate;
    void /* unknown type, empty encoding */ endDate;
    void /* unknown type, empty encoding */ statisticsInterval;
    void /* unknown type, empty encoding */ medication;
    void /* unknown type, empty encoding */ windowTakenCount;
    void /* unknown type, empty encoding */ windowSkippedCount;
}

- (id)userInfo;
- (id)init;
- (void).cxx_destruct;
- (id)yValue;
- (id)allYValues;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (id)xValueAsGenericType;
- (id)yValueForKey:(id)a0;

@end
