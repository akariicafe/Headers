@class NSString, GEOMapServiceTraits;

@interface _GEOPlaceEnrichmentTicket : GEOAbstractRequestResponseTicket <GEOMapServicePlaceEnrichmentTicket>

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)submitWithHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;

@end
