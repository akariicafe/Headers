@class NSString, GEOMapServiceTraits;
@protocol GEOMapServiceCuratedCollectionItemsTicket;

@interface _MKCuratedCollectionItemsTicket : NSObject <MKMapServiceCuratedCollectionItemsTicket> {
    id<GEOMapServiceCuratedCollectionItemsTicket> _ticket;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)initWithTicket:(id)a0;
- (void)submitWithHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;
- (void).cxx_destruct;
- (void)submitWithCallbackQueue:(id)a0 handler:(id /* block */)a1 networkActivity:(id /* block */)a2;

@end
