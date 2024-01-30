@class NSString;

@interface MapsSync.MapsSyncMutableCommunityID : MapsSync.MapsSyncMutableBaseItem {
    void /* unknown type, empty encoding */ _proxyObject;
}

@property (nonatomic, copy) NSString *communityIdentifier;
@property (nonatomic) BOOL expired;
@property (nonatomic) long long usedCount;

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)a0;

@end
