@class CLGeocoderInternal, CLSilo;

@interface CLGeocoder : NSObject {
    CLGeocoderInternal *_internal;
}

@property (setter=_setResponseSilo:) CLSilo *_responseSilo;
@property (readonly, nonatomic, getter=isGeocoding) BOOL geocoding;

+ (id)_timeZoneAtLocation:(id)a0;
+ (void)hydrateGeoMapItemLocallyFromHandle:(id)a0 completionHandler:(id /* block */)a1;

- (void)_notifyPartialResult:(id)a0;
- (void)reverseGeocodeLocation:(id)a0 localResultsOnly:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)geocodeAddressString:(id)a0 inRegion:(id)a1 completionHandler:(id /* block */)a2;
- (void)reverseGeocodeLocation:(id)a0 heading:(double)a1 localResultsOnly:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)reverseGeocodeLocation:(id)a0 preferredLocale:(id)a1 completionHandler:(id /* block */)a2;
- (void)geocodePostalAddress:(id)a0 completionHandler:(id /* block */)a1;
- (void)geocodeAddressString:(id)a0 completionHandler:(id /* block */)a1;
- (void)_ensureMainThreadExecutionContextForBlock:(id /* block */)a0;
- (void)_notifyResult:(id)a0;
- (void)geocodeAddressString:(id)a0 inRegion:(id)a1 preferredLocale:(id)a2 completionHandler:(id /* block */)a3;
- (void)geocodeAddressDictionary:(id)a0 preferredLocale:(id)a1 completionHandler:(id /* block */)a2;
- (void)reverseGeocodeLocation:(id)a0 preferredLocale:(id)a1 heading:(double)a2 localResultsOnly:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)reverseGeocodeLocation:(id)a0 completionHandler:(id /* block */)a1;
- (void)_notifyNoResult;
- (id)init;
- (void)_ticket:(id)a0 didReturnError:(id)a1;
- (void)_notifyError:(id)a0;
- (void)geocodePostalAddress:(id)a0 preferredLocale:(id)a1 completionHandler:(id /* block */)a2;
- (void)geocodeAddressDictionary:(id)a0 completionHandler:(id /* block */)a1;
- (void)_notifyCancel;
- (void)_notifyResult:(id)a0 error:(id)a1;
- (void)cancelGeocode;
- (void)reverseGeocodeLocation:(id)a0 heading:(double)a1 completionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)_ticket:(id)a0 didReturnError:(id)a1 partialResultForLocation:(id)a2;
- (void)_ticket:(id)a0 didReturnGeoMapItems:(id)a1;

@end
