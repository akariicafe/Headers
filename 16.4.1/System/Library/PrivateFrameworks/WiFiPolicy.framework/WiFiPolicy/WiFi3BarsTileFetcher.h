@class WiFi3BarsTileCacheObserver, TBDataSourceMediator, NSXPCConnection;

@interface WiFi3BarsTileFetcher : NSObject

@property (retain, nonatomic) TBDataSourceMediator *dataSourceMediator;
@property (nonatomic) unsigned long long lastFetchedKey;
@property (retain, nonatomic) WiFi3BarsTileCacheObserver *tileCacheObserver;
@property (readonly, nonatomic) NSXPCConnection *connectionToService;

- (id)initWithDataSourceMediator:(id)a0;
- (void)_handleLocationManagerVisitCallbackWithVisit:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
