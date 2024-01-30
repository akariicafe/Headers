@class NSString, NSArray, GEOMapServiceTraits;

@interface _GEOBatchPopularNearbyTicket : GEOAbstractRequestResponseTicket <GEOMapServiceBatchNearbyTicket> {
    NSArray *_categories;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct { int x0; union { int x0; int x1; int x2; } x1; } dataRequestKind;

- (void).cxx_destruct;
- (void)submitWithHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;
- (void)submitWithHandler:(id /* block */)a0 auditToken:(id)a1 networkActivity:(id /* block */)a2;
- (id)resultSectionHeaderForCategory:(id)a0;
- (id)initWithRequest:(id)a0 traits:(id)a1 categories:(id)a2;

@end
