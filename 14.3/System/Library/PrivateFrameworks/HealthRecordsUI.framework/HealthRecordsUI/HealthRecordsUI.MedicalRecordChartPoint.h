@class NSString;

@interface HealthRecordsUI.MedicalRecordChartPoint : NSObject <HKChartPoint> {
    void /* unknown type, empty encoding */ chartableSet;
    void /* unknown type, empty encoding */ blockCoordinateInfo;
    void /* unknown type, empty encoding */ sortedYValues;
}

@property (nonatomic, readonly) NSString *description;

- (id)userInfo;
- (id)init;
- (id)minYValue;
- (void).cxx_destruct;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)allYValues;
- (id)maxYValue;
- (id)yValue;
- (id)yValueForKey:(id)a0;

@end
