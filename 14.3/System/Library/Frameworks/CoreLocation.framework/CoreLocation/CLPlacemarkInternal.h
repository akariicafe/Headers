@class GEOMapItemStorage, CLRegion, NSArray, NSData, NSString, NSDictionary, NSTimeZone, CLLocation;

@interface CLPlacemarkInternal : NSObject {
    CLLocation *location;
    NSDictionary *addressDictionary;
    CLRegion *region;
    NSArray *areasOfInterest;
    GEOMapItemStorage *geoMapItemStorage;
    NSTimeZone *timeZone;
    unsigned long long _cLMapItemSource;
    NSData *_geoMapItemHandle;
    NSString *mecardAddress;
}

- (id)init;

@end
