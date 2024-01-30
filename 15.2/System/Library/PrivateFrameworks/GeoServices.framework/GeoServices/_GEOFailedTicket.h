@class NSError;

@interface _GEOFailedTicket : GEOAbstractMapServiceTicket {
    NSError *_error;
}

- (void)submitWithRefinedHandler:(id /* block */)a0 auditToken:(id)a1 timeout:(long long)a2 networkActivity:(id /* block */)a3;
- (void).cxx_destruct;
- (void)submitWithHandler:(id /* block */)a0 auditToken:(id)a1 timeout:(long long)a2 networkActivity:(id /* block */)a3;
- (id)initWithError:(id)a0 traits:(id)a1;

@end
