@class NSString;
@protocol GEODataSaverTileLoaderProxy;

@interface GEODataSaverTileLoaderManager : NSObject <GEODataSaverTileLoaderProxy> {
    id<GEODataSaverTileLoaderProxy> _proxy;
}

@property (readonly, nonatomic, getter=isDataSaverEnabled) BOOL dataSaverEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)useProxyClass:(Class)a0;
+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)_debug_initiateDataSaverPreload;

@end
