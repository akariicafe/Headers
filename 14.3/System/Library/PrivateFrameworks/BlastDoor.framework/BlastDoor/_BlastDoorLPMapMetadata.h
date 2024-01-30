@class NSString, _BlastDoorLPImage, CNPostalAddress, NSNumber;

@interface _BlastDoorLPMapMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } location;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) CNPostalAddress *addressComponents;
@property (copy, nonatomic) NSString *category;
@property (retain, nonatomic) _BlastDoorLPImage *categoryIcon;
@property (copy, nonatomic) NSString *searchQuery;
@property (copy, nonatomic) NSString *directionsType;
@property (retain, nonatomic) NSNumber *transportType;
@property (copy, nonatomic) NSString *directionsSourceAddress;
@property (copy, nonatomic) CNPostalAddress *directionsSourceAddressComponents;
@property (copy, nonatomic) NSString *directionsSourceLocationName;
@property (copy, nonatomic) NSString *directionsDestinationAddress;
@property (copy, nonatomic) CNPostalAddress *directionsDestinationAddressComponents;
@property (copy, nonatomic) NSString *directionsDestinationLocationName;
@property (retain, nonatomic) NSNumber *distance;
@property (retain, nonatomic) _BlastDoorLPImage *image;
@property (retain, nonatomic) _BlastDoorLPImage *darkImage;

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;

@end
