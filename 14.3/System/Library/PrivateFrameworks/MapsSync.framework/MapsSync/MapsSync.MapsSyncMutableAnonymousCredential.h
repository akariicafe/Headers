@class NSData, NSDate;

@interface MapsSync.MapsSyncMutableAnonymousCredential : MapsSync.MapsSyncMutableBaseItem {
    void /* unknown type, empty encoding */ _proxyObject;
}

@property (nonatomic, copy) NSData *anonymousId;
@property (nonatomic, copy) NSData *mapsToken;
@property (nonatomic, copy) NSDate *mapsTokenCreatedAt;
@property (nonatomic) unsigned long long mapsTokenTTL;

- (id)initWithProxyObject:(id)a0;
- (void).cxx_destruct;

@end
