@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HealthRecordsUI.MedicalRecordChartCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {
    void /* unknown type, empty encoding */ pointValuesAscending;
    void /* unknown type, empty encoding */ blockCoordinateInfo;
}

@property (nonatomic, readonly) double startXValue;
@property (nonatomic, readonly) double endXValue;
@property (nonatomic, readonly) id<HKGraphSeriesBlockCoordinateInfo> userInfo;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1;

@end
