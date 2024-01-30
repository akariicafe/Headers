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

+ (id)sharedManager;
+ (void)useProxyClass:(Class)a0;

- (void)_debug_initiateDataSaverPreload;
- (void).cxx_destruct;
- (id)init;

@end
