@class NSArray, NSString;

@interface _GEOIdentifiersTicket : GEOAbstractMapServiceTicket {
    NSArray *_identifiers;
    int _resultProviderID;
    NSString *_contentProvider;
    unsigned long long _options;
}

- (void).cxx_destruct;
- (id)description;
- (struct { int x0; union { int x0; int x1; int x2; } x1; })dataRequestKind;
- (id)initWithTraits:(id)a0;
- (id)initWithIdentifiers:(id)a0 resultProviderID:(int)a1 contentProvider:(id)a2 traits:(id)a3 options:(unsigned long long)a4;
- (id)initWithMUIDs:(id)a0 resultProviderID:(int)a1 contentProvider:(id)a2 traits:(id)a3 options:(unsigned long long)a4;
- (void)submitWithHandler:(id /* block */)a0 auditToken:(id)a1 timeout:(long long)a2 networkActivity:(id /* block */)a3;

@end
