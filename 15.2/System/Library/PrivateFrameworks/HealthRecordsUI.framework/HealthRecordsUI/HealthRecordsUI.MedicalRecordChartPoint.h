@class NSString;

@interface HealthRecordsUI.MedicalRecordChartPoint : NSObject <HKChartPoint> {
    void /* unknown type, empty encoding */ chartableSet;
    void /* unknown type, empty encoding */ blockCoordinateInfo;
    void /* unknown type, empty encoding */ sortedYValues;
}

@property (nonatomic, readonly) NSString *description;

- (id)userInfo;
- (id)yValue;
- (id)maxYValue;
- (id)minYValue;
- (void).cxx_destruct;
- (id)init;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValueForKey:(id)a0;
- (id)allYValues;

@end
