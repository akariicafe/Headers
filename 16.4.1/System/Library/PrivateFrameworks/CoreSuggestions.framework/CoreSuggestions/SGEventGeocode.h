@interface SGEventGeocode : NSObject

+ (id)_serialQueue;
+ (id)dateForUTCDate:(id)a0 withTimeZone:(id)a1;
+ (void)geocodeAddress:(id)a0 withCallback:(id /* block */)a1;
+ (void)geocodeAddressWithCanonicalSearch:(id)a0 withCallback:(id /* block */)a1;
+ (id)geocodeEvent:(id)a0;
+ (void)geocodeEvent:(id)a0 withCallback:(id /* block */)a1;
+ (void)geocodeLocation:(id)a0 usingMode:(unsigned long long)a1 withGeoFilters:(id)a2 withCallback:(id /* block */)a3;
+ (void)geocodePOIWithName:(id)a0 ofTypes:(id)a1 inRegion:(id)a2 withCallback:(id /* block */)a3;
+ (BOOL)isGeocodeCandidate:(id)a0;
+ (BOOL)isGeocodeCandidateLocation:(id)a0 forEvent:(id)a1;
+ (BOOL)locationIsAirport:(id)a0;
+ (BOOL)locationIsGeocoded:(id)a0;
+ (id)poiCategoriesFromString:(id)a0;

@end
