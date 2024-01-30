@class HKMinMaxCoordinate, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKBloodPressureCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {
    id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property (readonly, nonatomic) HKMinMaxCoordinate *systolicCoordinate;
@property (readonly, nonatomic) HKMinMaxCoordinate *diastolicCoordinate;
@property (readonly, nonatomic) double startXValue;
@property (readonly, nonatomic) double endXValue;
@property (readonly, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
