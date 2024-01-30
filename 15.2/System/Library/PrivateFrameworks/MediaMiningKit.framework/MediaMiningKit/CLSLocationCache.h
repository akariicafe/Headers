@class NSPredicate;

@interface CLSLocationCache : CLSDBCache {
    NSPredicate *_entryPredicateWithContactsPostalAddressTemplate;
    NSPredicate *_entryPredicateWithAddressBookDictionaryTemplate;
    NSPredicate *_entryPredicateWithCoordinateTemplate;
    NSPredicate *_entryPredicateWithAddressTemplate;
    NSPredicate *_entryPredicateWithMUID;
}

+ (id)defaultCacheName;
+ (BOOL)cachedRegion:(id)a0 isMatchingOtherRegion:(id)a1;

- (id)dataModelName;
- (void).cxx_destruct;
- (id)initWithDiskCacheName:(id)a0;
- (void)invalidateCacheItemsBeforeDateWithTimestamp:(double)a0;
- (id)placemarksForLocation:(id)a0;
- (id)fetchPlacemarkForLocation:(id)a0 withQueryAccuracy:(double)a1;
- (id)placemarksForLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 withHorizontalAccuracy:(double)a1 queryAccuracy:(double)a2;
- (void)invalidateCacheForGeoServiceProviderChangeToProvider:(id)a0;
- (BOOL)hasRegion:(id)a0;
- (void)insertBatchesOfPlacemarks:(id)a0 forLocations:(id)a1;
- (void)invalidateCacheForLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 withHorizontalAccuracy:(double)a1;
- (id)predicateForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 withHorizontalAccuracy:(double)a1;
- (id)predicateForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 withHorizontalAccuracy:(double)a1 queryAccuracy:(double)a2;
- (id)nearestEntryForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 entries:(id)a1;
- (BOOL)hasCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 withHorizontalAccuracy:(double)a1;
- (void)setPlacemarks:(id)a0 forLocation:(id)a1;
- (void)setPlacemarks:(id)a0 forCLLocation:(id)a1;
- (void)setPlacemarks:(id)a0 forLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 withHorizontalAccuracy:(double)a2;
- (id)placemarksForLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 withHorizontalAccuracy:(double)a1;
- (void)setPlacemarks:(id)a0 forLocationAddress:(id)a1;
- (id)placemarksForLocationAddress:(id)a0;
- (void)setPlacemarks:(id)a0 forAddressDictionary:(id)a1;
- (id)placemarksForAddressDictionary:(id)a0;
- (void)setPlacemarks:(id)a0 forPostalAddress:(id)a1;
- (id)placemarksForPostalAddress:(id)a0;
- (id)placemarksForLocation:(id)a0 withQueryAccuracy:(double)a1;
- (id)_stringifyAddressDictionaryValues:(id)a0;
- (id)_stringifyCircularRegionValue:(id)a0;
- (id)_stringifyPostalAddress:(id)a0;
- (void)setPlacemark:(id)a0 forMUID:(unsigned long long)a1;
- (id)placemarkForMUID:(unsigned long long)a0;
- (void)invalidateCacheForMUID:(unsigned long long)a0;
- (void)_setPlacemarks:(id)a0 forEntryWithPredicate:(id)a1 entrySetupBlock:(id /* block */)a2;
- (id)_litePlacemarksFromManagedPlacemarks:(id)a0;
- (id)_insertManagedPlacemarksForLitePlacemarks:(id)a0 inContext:(id)a1;
- (id)_insertManagedPlacemarkForLitePlacemark:(id)a0 inContext:(id)a1;
- (id)_litePlacemarkFromManagedPlacemark:(id)a0;

@end
