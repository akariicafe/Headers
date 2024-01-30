@class NSArray, NSString, CLSPOICache;
@protocol GEOMapServiceTicket;

@interface CLSBusinessGeoServiceQuery : NSObject <CLSQueryProtocol> {
    CLSPOICache *_cache;
}

@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, copy, nonatomic) NSArray *muids;
@property (readonly, nonatomic) id<GEOMapServiceTicket> ticket;
@property (readonly, nonatomic) NSArray *resolvedBusinessItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (void)submitWithHandler:(id /* block */)a0;
- (void)prepareForRetry;
- (id)initWithMUIDs:(id)a0;

@end
