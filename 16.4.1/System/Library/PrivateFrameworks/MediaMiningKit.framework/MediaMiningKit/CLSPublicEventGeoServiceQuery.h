@class NSArray, NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, GEOMapServiceSpatialEventLookupTicket;

@interface CLSPublicEventGeoServiceQuery : NSObject <CLSQueryProtocol>

@property (readonly, nonatomic) NSArray *timeLocationTuples;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) NSDictionary *parametersByTimeLocationTupleIdentifier;
@property (readonly, nonatomic) id<GEOMapServiceSpatialEventLookupTicket> ticket;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *geoQueue;
@property (retain, nonatomic) NSDictionary *resolvedPublicEventsForTimeLocationTuples;
@property (retain, nonatomic) NSDictionary *invalidationTokens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)maximumBatchSize;

- (void)cancel;
- (void).cxx_destruct;
- (void)submitWithHandler:(id /* block */)a0;
- (void)prepareForRetry;
- (id)_parametersByTimeLocationTupleIdentifierForTimeLocationTuples:(id)a0;
- (id)_publicEventsForGeoEvent:(id)a0 matchingParameters:(id)a1;
- (id)initWithTimeLocationTuples:(id)a0 radius:(double)a1;

@end
