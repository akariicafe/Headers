@class NSArray, CLGeocoder, CLLocation;

@interface OFCLGeocoderOperation : OFNSOperation {
    CLGeocoder *_geocoder;
    CLLocation *_location;
    double _accuracy;
}

@property (retain) NSArray *placemarks;

+ (id)operationWithLocation:(id)a0;
+ (id)operationWithLocation:(id)a0 accuracy:(double)a1;
+ (double)recommendedAccuracy;

- (void)dealloc;
- (void)cancelOperation;
- (void)finishOperation;
- (unsigned long long)launchOperation;
- (void)cleanupOperation;
- (id)initWithLocation:(id)a0 accuracy:(double)a1;

@end
