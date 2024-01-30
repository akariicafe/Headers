@class NSMutableArray, CLInUseAssertion, CLPlacemark, CLGeocoder, CLLocation;

@interface NWCComplicationGeocoder : NSObject {
    CLGeocoder *_geocoder;
    CLLocation *_cachedLocation;
    CLPlacemark *_cachedPlacemark;
    CLInUseAssertion *_locationInUseAssertion;
    NSMutableArray *_handlers;
}

@property (class, readonly) NWCComplicationGeocoder *sharedGeocoder;

- (id)init;
- (void).cxx_destruct;
- (void)_handlePlacemarks:(id)a0 fromLocation:(id)a1 error:(id)a2;
- (id)cachedPlacemarkForLocation:(id)a0;
- (void)placemarkForLocation:(id)a0 handler:(id /* block */)a1;

@end
