@class CLSLocationCache, NSObject;
@protocol OS_dispatch_source;

@interface CLSCachedGeocoderOperation : NSObject {
    BOOL _forceQuery;
    BOOL _cancelled;
    id _location;
    CLSLocationCache *_locationCache;
    double _accuracy;
    NSObject<OS_dispatch_source> *_timer;
}

+ (id)operationForceGeocoderWithLocation:(id)a0 withAccuracy:(double)a1;
+ (id)operationForceGeocoderWithLocation:(id)a0;
+ (id)operationWithLocation:(id)a0;
+ (id)operationWithLocation:(id)a0 withAccuracy:(double)a1;

- (void).cxx_destruct;
- (id)performSynchronouslyWithError:(id *)a0;
- (void)_executeQueryWithResultBlock:(id /* block */)a0;
- (void)_returnsResultsForPlacemarks:(id)a0 error:(id)a1 resultBlock:(id /* block */)a2;
- (void)_setupTimeOutForGeocoder:(id)a0 resultBlock:(id /* block */)a1;
- (void)_stopTimeOut;
- (void)_timedOutForGeocoder:(id)a0 withResultBlock:(id /* block */)a1;
- (id)initWithLocation:(id)a0 withAccuracy:(double)a1;

@end
