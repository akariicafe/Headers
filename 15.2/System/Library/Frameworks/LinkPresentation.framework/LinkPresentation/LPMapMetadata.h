@class NSString, CNPostalAddress, LPImage, NSNumber;

@interface LPMapMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataBackwardCompatibility>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } location;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) CNPostalAddress *addressComponents;
@property (copy, nonatomic) NSString *category;
@property (retain, nonatomic) LPImage *categoryIcon;
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
@property (retain, nonatomic) LPImage *image;
@property (retain, nonatomic) LPImage *darkImage;

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (long long)_style;
- (id)_address;
- (id)_resolvedImage;
- (void)encodeWithCoder:(id)a0;
- (id)_name;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)previewSummaryForTransformer:(id)a0;
- (id)previewImageForTransformer:(id)a0;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;
- (void)populateMetadataForBackwardCompatibility:(id)a0;
- (id)_directionsSourceAddress;
- (id)_directionsDestinationAddress;
- (id)presentationPropertiesForTransformer:(id)a0;
- (BOOL)canGeneratePresentationPropertiesForURL:(id)a0;
- (id)fallbackIconForTransformer:(id)a0;
- (id)_deduplicatedAddress;
- (BOOL)_isDirections;
- (id)_singleLineVerboseDescription;
- (id)_iconForTransport;
- (id)_singleLineShortDescription;
- (id)_topLineForTransformer:(id)a0;
- (id)_bottomLineForTwoUpForTransformer:(id)a0;

@end
