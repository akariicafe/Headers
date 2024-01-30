@class NSString, NSData, CLSLocationCacheEntry;

@interface CLSManagedPlacemark : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityName;

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double regionLatitude;
@property (nonatomic) double regionLongitude;
@property (nonatomic) double regionRadius;
@property (copy, nonatomic) NSString *regionIdentifier;
@property (copy, nonatomic) NSString *thoroughfare;
@property (copy, nonatomic) NSString *subThoroughfare;
@property (copy, nonatomic) NSString *locality;
@property (copy, nonatomic) NSString *subLocality;
@property (copy, nonatomic) NSString *administrativeArea;
@property (copy, nonatomic) NSString *administrativeAreaCode;
@property (copy, nonatomic) NSString *subAdministrativeArea;
@property (copy, nonatomic) NSString *isoCountryCode;
@property (copy, nonatomic) NSString *inlandWater;
@property (copy, nonatomic) NSString *ocean;
@property (copy, nonatomic) NSString *areasOfInterest;
@property (copy, nonatomic) NSString *geoServiceProvider;
@property (nonatomic) BOOL isIsland;
@property (retain, nonatomic) NSData *revGeoLocationData;
@property (retain, nonatomic) CLSLocationCacheEntry *entry;

@end
