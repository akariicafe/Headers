@class WLSQLController, NSString, WLSourceDevice;

@interface WLAppMigrator : NSObject <WLDataclassMigrating>

@property (retain, nonatomic) WLSourceDevice *device;
@property (retain, nonatomic) WLSQLController *sqlController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentType;
+ (id)dataType;
+ (void)installMigratableApps:(id)a0 completion:(id /* block */)a1;
+ (void)_sendStoreDownloadRequestForFreeMigratableApps:(id)a0 completion:(id /* block */)a1;
+ (id)_ssItemForiTunesStoreIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)contentType;
- (id)dataType;
- (BOOL)accountBased;
- (void)importDataFromProvider:(id /* block */)a0 forSummaries:(id)a1 summaryStart:(id /* block */)a2 summaryCompletion:(id /* block */)a3;
- (BOOL)storeRecordDataInDatabase;
- (BOOL)wantsSegmentedDownloads;
- (void)estimateItemSizeForSummary:(id)a0 account:(id)a1;
- (id)initWithDevice:(id)a0 sqlController:(id)a1;
- (void)_lookupStoreItemsMatchingExternalIDs:(id)a0 attempt:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_insertMatchingApps:(id)a0;

@end
