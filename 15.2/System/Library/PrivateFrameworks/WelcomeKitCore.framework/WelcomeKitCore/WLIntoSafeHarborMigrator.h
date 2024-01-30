@class WLSourceDevice, NSString, WLSafeHarborManager, WLSafeHarborDirectory, WLSQLController, WLFeaturePayload;

@interface WLIntoSafeHarborMigrator : NSObject <WLDataclassMigrating, WLAnalyticsDataSource> {
    NSString *_bundleID;
    NSString *_contentType;
    NSString *_dataType;
    WLSafeHarborManager *_safeHarborManager;
    WLSQLController *_sqlController;
    WLSafeHarborDirectory *_safeHarborDirectory;
}

@property (weak, nonatomic) WLFeaturePayload *featurePayload;
@property (readonly, nonatomic) WLSourceDevice *sourceDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dataType;
- (void)enable;
- (id)contentType;
- (void)setState:(id)a0;
- (void).cxx_destruct;
- (BOOL)canMigrate;
- (BOOL)accountBased;
- (BOOL)confirmItemSizeWithSourceBeforeDownloading;
- (void)importRecordData:(id)a0 summary:(id)a1 account:(id)a2 completion:(id /* block */)a3;
- (BOOL)storeRecordDataInDatabase;
- (BOOL)wantsSegmentedDownloads;
- (id)importWillBegin;
- (id)importDidEnd;
- (id)safeHarborBundleID;
- (void)setEstimatedDataSize:(unsigned long long)a0;
- (void)addWorkingTime:(unsigned long long)a0;
- (id)initWithBundleID:(id)a0 contentType:(id)a1 dataType:(id)a2 safeHarborManager:(id)a3 sourceDevice:(id)a4 sqlController:(id)a5;

@end
