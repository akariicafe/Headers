@class WLSourceDevice, NSString, WLSafeHarborManager, WLSafeHarborDirectory, WLSQLController;

@interface WLIntoSafeHarborMigrator : NSObject <WLDataclassMigrating> {
    NSString *_bundleID;
    NSString *_contentType;
    NSString *_dataType;
    WLSafeHarborManager *_safeHarborManager;
    WLSQLController *_sqlController;
    WLSafeHarborDirectory *_safeHarborDirectory;
}

@property (readonly, nonatomic) WLSourceDevice *sourceDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)contentType;
- (id)dataType;
- (BOOL)canMigrate;
- (BOOL)accountBased;
- (BOOL)confirmItemSizeWithSourceBeforeDownloading;
- (void)importRecordData:(id)a0 summary:(id)a1 account:(id)a2 completion:(id /* block */)a3;
- (BOOL)storeRecordDataInDatabase;
- (BOOL)wantsSegmentedDownloads;
- (id)importWillBegin;
- (id)importDidEnd;
- (id)safeHarborBundleID;
- (id)initWithBundleID:(id)a0 contentType:(id)a1 dataType:(id)a2 safeHarborManager:(id)a3 sourceDevice:(id)a4 sqlController:(id)a5;

@end
