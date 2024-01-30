@class MKMapService, NSObject;
@protocol OS_dispatch_queue, PKMerchantLookupRequestSource;

@interface PKMerchantLookupRequest : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    id<PKMerchantLookupRequestSource> _source;
    MKMapService *_service;
}

- (id)initWithSource:(id)a0;
- (void).cxx_destruct;
- (id)_brandFromMapItem:(id)a0;
- (void)_mapItemBrandWithMUID:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_mapsDataWithResponse:(id)a0 searchMapItem:(id)a1 completion:(id /* block */)a2;
- (id)_merchantFromMapItem:(id)a0;
- (void)startLookupWithCompletion:(id /* block */)a0;

@end
