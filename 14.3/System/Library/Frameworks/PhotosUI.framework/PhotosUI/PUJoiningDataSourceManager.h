@class NSArray, NSString;

@interface PUJoiningDataSourceManager : PUAssetsDataSourceManager <PUAssetsDataSourceManagerDelegate>

@property (readonly, nonatomic) NSArray *_dataSourceManagers;
@property (nonatomic, setter=_setCurrentUpdateId:) long long _currentUpdateID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)assetsDataSourceManager:(id)a0 didChangeAssetsDataSource:(id)a1;
- (id)assetsDataSourceManagerInterestingAssetReferences:(id)a0;
- (id)initWithDataSourceManagers:(id)a0;
- (void)_handleScheduledUpdateWithID:(long long)a0;
- (void)_update;
- (void)_scheduleUpdate;

@end
