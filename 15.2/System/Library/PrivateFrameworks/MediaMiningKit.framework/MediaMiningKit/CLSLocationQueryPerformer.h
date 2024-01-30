@class NSArray, NSString, NSObject;
@protocol OS_os_log, GEOMapServiceTicket;

@interface CLSLocationQueryPerformer : NSObject <CLSQueryPerformerProtocol>

@property (readonly, nonatomic) NSArray *geoLocations;
@property (readonly, nonatomic) id<GEOMapServiceTicket> ticket;
@property (readonly, copy, nonatomic) NSArray *regions;
@property (readonly, nonatomic) BOOL isCancelled;
@property (nonatomic) struct { unsigned long long numberOfLocations; unsigned long long numberOfResolvedLocations; unsigned long long numberOfUnneededLocations; unsigned long long numberOfRequests; unsigned long long batchSize; } statistics;
@property (nonatomic) double precision;
@property (nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultPrecision;
+ (id)queryWithTemplate:(id)a0 forRegions:(id)a1;
+ (unsigned long long)numberOfRegionsPerBatch;

- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (void)submitWithHandler:(id /* block */)a0;
- (BOOL)shouldQueryItemsForRegion:(id)a0 selectedRegions:(id)a1;
- (unsigned long long)cacheItems:(id)a0;
- (void)logGeoLookupCounterAndDurationWithLookupDuration:(id)a0;
- (void)logGeoLookupFailureResult;
- (id)initWithRegions:(id)a0 precision:(double)a1;

@end
