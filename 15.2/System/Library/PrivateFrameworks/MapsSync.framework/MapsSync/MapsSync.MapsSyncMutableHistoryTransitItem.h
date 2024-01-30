@class NSData;

@interface MapsSync.MapsSyncMutableHistoryTransitItem : MapsSync.MapsSyncMutableHistoryItem {
    void /* unknown type, empty encoding */ _proxyHistory;
}

@property (nonatomic, copy) NSData *transitLineItemStorageData;
@property (nonatomic) unsigned long long muid;

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)a0;

@end
