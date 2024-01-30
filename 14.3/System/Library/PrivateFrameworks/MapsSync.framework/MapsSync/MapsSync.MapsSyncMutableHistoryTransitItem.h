@class NSData;

@interface MapsSync.MapsSyncMutableHistoryTransitItem : MapsSync.MapsSyncMutableHistoryItem {
    void /* unknown type, empty encoding */ _proxyHistory;
}

@property (nonatomic, copy) NSData *transitLineItemStorageData;
@property (nonatomic) unsigned long long muid;

- (id)initWithProxyObject:(id)a0;
- (void).cxx_destruct;

@end
