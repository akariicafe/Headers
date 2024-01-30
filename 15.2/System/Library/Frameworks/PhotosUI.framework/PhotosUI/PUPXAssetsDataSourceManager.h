@class NSString, PXAssetsDataSourceManager;

@interface PUPXAssetsDataSourceManager : PUAssetsDataSourceManager <PXAssetsDataSourceManagerObserver>

@property (nonatomic, setter=_setCurrentUpdateId:) long long _currentUpdateID;
@property (readonly, nonatomic) PXAssetsDataSourceManager *underlyingDataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)photosDataSource;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)_scheduleUpdate;
- (void)_update;
- (void)_handleScheduledUpdateWithID:(long long)a0;
- (id)initWithUnderlyingDataSourceManager:(id)a0;

@end
