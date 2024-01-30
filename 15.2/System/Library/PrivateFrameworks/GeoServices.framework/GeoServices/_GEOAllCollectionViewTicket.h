@class NSString, GEOMapServiceTraits;

@interface _GEOAllCollectionViewTicket : GEOAbstractRequestResponseTicket <GEOMapServiceAllCollectionsViewTicket>

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parseAllCollectionViewResponse:(id)a0 usingError:(id)a1 usingUserInfo:(id)a2 onCompletionHandler:(id /* block */)a3;
- (void)submitWithHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;

@end
