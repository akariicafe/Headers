@class NSString;

@interface GEODataSaverTileLoaderRemoteProxy : NSObject <GEODataSaverTileLoaderProxy>

@property (readonly, nonatomic, getter=isDataSaverEnabled) BOOL dataSaverEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_debug_initiateDataSaverPreload;

@end
