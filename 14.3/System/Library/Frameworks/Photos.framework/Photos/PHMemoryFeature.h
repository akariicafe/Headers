@interface PHMemoryFeature : NSObject <NSSecureCoding> {
    id _subtypeSpecificAttribute;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;

+ (id)stringForType:(unsigned long long)a0;
+ (id)personUniversalIdentifierForPersonLocalIdentifier:(id)a0 photoLibrary:(id)a1;
+ (id)peopleMemoryFeatureWithPersonLocalIdentifier:(id)a0;
+ (id)personLocalIdentifierForPersonUniversalIdentifier:(id)a0 photoLibrary:(id)a1;
+ (id)timeMemoryFeatureWithDate:(id)a0;
+ (id)timeMemoryFeatureWithHolidayForName:(id)a0;
+ (id)locationMemoryFeatureWithLocation:(id)a0;
+ (id)locationMemoryFeatureWithAreaForName:(id)a0;
+ (id)memoryFeatureWithData:(id)a0 photoLibrary:(id)a1;

- (void).cxx_destruct;
- (id)areaName;
- (id)date;
- (id)holidayName;
- (id)encodedDataWithPhotoLibrary:(id)a0;
- (id)personLocalIdentifier;
- (BOOL)collidesWithFeature:(id)a0;
- (BOOL)collidesWithDate:(id)a0;
- (BOOL)collidesWithHolidayWithName:(id)a0;
- (BOOL)collidesWithLocationAtCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (BOOL)collidesWithAreaWithName:(id)a0;
- (BOOL)collidesWithPersonWithLocalIdentifier:(id)a0;
- (id)location;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
