@class NSString;

@interface GEODataSaverTileLoaderLocalProxy : NSObject <GEODataSaverTileLoaderProxy>

@property (readonly, nonatomic, getter=isDataSaverEnabled) BOOL dataSaverEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_debug_initiateDataSaverPreload;
- (void)_removeOldRegionStateFromDisk;

@end
