@class GEOBatchRevGeocodeRequest;

@interface _GEOLegacyBatchReverseGeocodeTicket : GEOAbstractMapServiceTicket {
    GEOBatchRevGeocodeRequest *_batchReverseGeocodeRequest;
    id /* block */ _locationShifter;
}

- (void)submitWithHandler:(id /* block */)a0 auditToken:(id)a1 timeout:(long long)a2 networkActivity:(id /* block */)a3;
- (void)cancel;
- (id)description;
- (void).cxx_destruct;
- (void)_batchReverseGeocodeWithRequest:(id)a0 auditToken:(id)a1 handler:(id /* block */)a2 networkActivity:(id /* block */)a3;
- (id)initWithBatchReverseGeocodeRequest:(id)a0 locationShifter:(id /* block */)a1 traits:(id)a2;
- (BOOL)isEqualForHistoryToTicket:(id)a0;

@end
