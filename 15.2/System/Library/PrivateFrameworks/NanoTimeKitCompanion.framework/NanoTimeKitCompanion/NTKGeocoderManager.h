@class CLInUseAssertion, CLPlacemark, CLGeocoder, CLLocation, NSMutableArray;

@interface NTKGeocoderManager : NSObject {
    CLGeocoder *_geocoder;
    CLLocation *_cachedLocation;
    CLPlacemark *_cachedPlacemark;
    CLInUseAssertion *_locationInUseAssertion;
    NSMutableArray *_handlers;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (id)cachedPlacemarkForLocation:(id)a0;
- (void)_handlePlacemarks:(id)a0 fromLocation:(id)a1 error:(id)a2;
- (void)placemarkForLocation:(id)a0 handler:(id /* block */)a1;

@end
