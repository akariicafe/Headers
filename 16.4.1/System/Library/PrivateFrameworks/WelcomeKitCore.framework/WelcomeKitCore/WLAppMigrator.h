@class WLSourceDevice, NSString, WLSQLController, WLFeaturePayload;

@interface WLAppMigrator : NSObject <WLDataclassMigrating, WLAnalyticsDataSource>

@property (retain, nonatomic) WLSourceDevice *device;
@property (retain, nonatomic) WLSQLController *sqlController;
@property (weak, nonatomic) WLFeaturePayload *featurePayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentType;
+ (id)dataType;
+ (void)_sendStoreDownloadRequestForFreeMigratableApps:(id)a0 completion:(id /* block */)a1;
+ (id)_ssItemForiTunesStoreIdentifier:(id)a0;
+ (void)installMigratableApps:(id)a0 completion:(id /* block */)a1;

- (void)enable;
- (id)contentType;
- (id)dataType;
- (void).cxx_destruct;
- (void)setState:(id)a0;
- (void)addWorkingTime:(unsigned long long)a0;
- (void)_insertMatchingApps:(id)a0;
- (void)_lookupStoreItemsMatchingExternalIDs:(id)a0 attempt:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)accountBased;
- (void)estimateItemSizeForSummary:(id)a0 account:(id)a1;
- (void)importDataFromProvider:(id /* block */)a0 forSummaries:(id)a1 summaryStart:(id /* block */)a2 summaryCompletion:(id /* block */)a3;
- (id)initWithDevice:(id)a0 sqlController:(id)a1;
- (void)setEstimatedDataSize:(unsigned long long)a0;
- (BOOL)storeRecordDataInDatabase;
- (BOOL)wantsSegmentedDownloads;

@end
