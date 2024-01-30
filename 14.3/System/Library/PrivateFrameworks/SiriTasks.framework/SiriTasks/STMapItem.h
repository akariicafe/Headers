@class NSString, NSData, CLLocation, NSNumber;

@interface STMapItem : STSiriModelObject {
    NSString *_title;
    CLLocation *_location;
    NSData *_placeData;
    BOOL _isCurrentLocation;
    NSNumber *_businessID;
    NSNumber *_localSearchProviderID;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithMKMapItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_aceContextObjectValue;
- (Class)_aceCollectionClass;
- (void)encodeWithCoder:(id)a0;

@end
