@class CLRegion, NSString, NSArray, CNPostalAddress, NSDictionary, CLPlacemarkInternal, NSTimeZone, CLLocation;

@interface CLPlacemark : NSObject <NSCopying, NSSecureCoding> {
    CLPlacemarkInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CNPostalAddress *postalAddress;
@property (readonly, copy, nonatomic) CLLocation *location;
@property (readonly, copy, nonatomic) CLRegion *region;
@property (readonly, copy, nonatomic) NSTimeZone *timeZone;
@property (readonly, copy, nonatomic) NSDictionary *addressDictionary;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *thoroughfare;
@property (readonly, copy, nonatomic) NSString *subThoroughfare;
@property (readonly, copy, nonatomic) NSString *locality;
@property (readonly, copy, nonatomic) NSString *subLocality;
@property (readonly, copy, nonatomic) NSString *administrativeArea;
@property (readonly, copy, nonatomic) NSString *subAdministrativeArea;
@property (readonly, copy, nonatomic) NSString *postalCode;
@property (readonly, copy, nonatomic) NSString *ISOcountryCode;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy, nonatomic) NSString *inlandWater;
@property (readonly, copy, nonatomic) NSString *ocean;
@property (readonly, copy, nonatomic) NSArray *areasOfInterest;

+ (unsigned long long)_cLMapItemSourceFromRLMapItemSource:(unsigned long long)a0;
+ (id)placemarkWithGEOMapItem:(id)a0;

- (id)initWithLocation:(id)a0 addressDictionary:(id)a1 region:(id)a2 areasOfInterest:(id)a3 mapItemSource:(unsigned long long)a4 geoMapItemHandle:(id)a5 meCardAddress:(id)a6;
- (id)formattedAddressLines;
- (id)fullThoroughfare;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_initWithRTMapItem:(id)a0 location:(id)a1;
- (id)initWithPlacemark:(id)a0;
- (id)mecardAddress;
- (id)_geoMapItemHandle;
- (id)_initWithGeoMapItem:(id)a0;
- (id)initWithLocation:(id)a0 addressDictionary:(id)a1 region:(id)a2 areasOfInterest:(id)a3;
- (void)fetchFormattedAddress:(id /* block */)a0 queue:(id)a1;
- (id)_geoMapItem;
- (void)encodeWithCoder:(id)a0;

@end
