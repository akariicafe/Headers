@class NSString, PPClientFeedbackHelper;

@interface PPLocationStore : NSObject <PPFeedbackAccepting, PPClientStore> {
    PPClientFeedbackHelper *_clientFeedbackHelper;
}

@property (retain, nonatomic) NSString *clientIdentifier;

+ (id)placemarkWithLocation:(id)a0 name:(id)a1 thoroughfare:(id)a2 subthoroughFare:(id)a3 locality:(id)a4 subLocality:(id)a5 administrativeArea:(id)a6 subAdministrativeArea:(id)a7 postalCode:(id)a8 countryCode:(id)a9 country:(id)a10 inlandWater:(id)a11 ocean:(id)a12 areasOfInterest:(id)a13;
+ (id)placemarkWithName:(id)a0 clLocation:(id)a1;
+ (id)defaultStore;
+ (id)placemarkWithLatitudeDegrees:(id)a0 longitudeDegrees:(id)a1 name:(id)a2 thoroughfare:(id)a3 subthoroughFare:(id)a4 locality:(id)a5 subLocality:(id)a6 administrativeArea:(id)a7 subAdministrativeArea:(id)a8 postalCode:(id)a9 countryCode:(id)a10 country:(id)a11 inlandWater:(id)a12 ocean:(id)a13 areasOfInterest:(id)a14;
+ (id)_mergedThoroughfareForThorughfare:(id)a0 subThoroughfare:(id)a1 subPremises:(id)a2;
+ (id)describeLocationConsumer:(unsigned long long)a0;

- (void)registerFeedback:(id)a0 clientIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)cloudSyncWithError:(id *)a0;
- (void).cxx_destruct;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (BOOL)iterLocationRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;
- (id)locationRecordsWithQuery:(id)a0 error:(id *)a1;
- (id)rankedLocationsWithQuery:(id)a0 error:(id *)a1;
- (BOOL)iterRankedLocationsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)donateLocations:(id)a0 source:(id)a1 contextualNamedEntities:(id)a2 algorithm:(unsigned short)a3 cloudSync:(BOOL)a4 decayRate:(double)a5 error:(id *)a6;

@end
