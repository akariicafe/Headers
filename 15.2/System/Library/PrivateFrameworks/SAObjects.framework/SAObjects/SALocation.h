@class NSString, NSArray, NSData, SADistance, NSNumber;

@interface SALocation : SADomainObject <SAAceComparable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *accuracy;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSArray *entryPoints;
@property (copy, nonatomic) NSData *forwardGeoData;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *latitude;
@property (copy, nonatomic) NSNumber *longitude;
@property (copy, nonatomic) NSString *postalCode;
@property (copy, nonatomic) NSString *regionType;
@property (retain, nonatomic) SADistance *relativeDistance;
@property (copy, nonatomic) NSString *stateCode;
@property (copy, nonatomic) NSString *street;
@property (copy, nonatomic) NSString *subAdministrativeArea;
@property (copy, nonatomic) NSString *subLocality;
@property (copy, nonatomic) NSString *subThoroughfare;
@property (copy, nonatomic) NSString *thoroughfare;
@property (copy, nonatomic) NSString *timezoneId;
@property (copy, nonatomic) NSNumber *travelDistance;
@property (copy, nonatomic) NSNumber *travelTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)location;
+ (id)locationWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
