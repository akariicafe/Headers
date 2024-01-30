@class NSString, NSArray;

@interface PPMockRTAddress : NSObject

@property (retain, nonatomic) NSString *subThoroughfare;
@property (retain, nonatomic) NSString *thoroughfare;
@property (retain, nonatomic) NSString *subLocality;
@property (retain, nonatomic) NSString *locality;
@property (retain, nonatomic) NSString *subAdministrativeArea;
@property (retain, nonatomic) NSString *administrativeArea;
@property (retain, nonatomic) NSString *administrativeAreaCode;
@property (retain, nonatomic) NSString *postalCode;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *inlandWater;
@property (retain, nonatomic) NSString *ocean;
@property (retain, nonatomic) NSArray *areasOfInterest;

- (void).cxx_destruct;

@end
