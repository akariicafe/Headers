@class NSDictionary, GEOMapItemIdentifier, NSString;

@interface _GEOComponentsTicket : GEOAbstractMapServiceTicket {
    NSDictionary *_components;
    GEOMapItemIdentifier *_identifier;
    int _resultProviderID;
    NSString *_contentProvider;
}

- (id)initWithTraits:(id)a0;
- (void)submitWithHandler:(id /* block */)a0 auditToken:(id)a1 timeout:(long long)a2 networkActivity:(id /* block */)a3;
- (struct { int x0; union { int x0; int x1; int x2; } x1; })dataRequestKind;
- (id)description;
- (void).cxx_destruct;
- (id)initWithComponents:(id)a0 identifier:(id)a1 resultProviderID:(int)a2 contentProvider:(id)a3 traits:(id)a4;

@end
