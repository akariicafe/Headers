@class NSString, NSArray, CLCircularRegion, CLLocation;

@interface CLSLitePlacemarkTestData : NSObject

@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) CLCircularRegion *region;
@property (retain, nonatomic) NSString *thoroughfare;
@property (retain, nonatomic) NSString *subThoroughfare;
@property (retain, nonatomic) NSString *locality;
@property (retain, nonatomic) NSString *subLocality;
@property (retain, nonatomic) NSString *administrativeArea;
@property (retain, nonatomic) NSString *administrativeAreaCode;
@property (retain, nonatomic) NSString *subAdministrativeArea;
@property (retain, nonatomic) NSString *ISOcountryCode;
@property (retain, nonatomic) NSString *inlandWater;
@property (retain, nonatomic) NSString *ocean;
@property (retain, nonatomic) NSArray *areasOfInterest;
@property (nonatomic) BOOL isIsland;

- (void).cxx_destruct;

@end
