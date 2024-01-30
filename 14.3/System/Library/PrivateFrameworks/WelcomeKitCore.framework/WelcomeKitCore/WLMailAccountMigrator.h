@class NSString, ACAccountStore;

@interface WLMailAccountMigrator : NSObject <MFAccountValidatorDelegate, WLDataclassMigrating> {
    ACAccountStore *_accountStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentType;

- (void).cxx_destruct;
- (void)accountValidator:(id)a0 finishedValidationOfAccount:(id)a1 usedSSL:(BOOL)a2;
- (id)contentType;
- (id)dataType;
- (BOOL)accountBased;
- (void)importRecordData:(id)a0 summary:(id)a1 account:(id)a2 completion:(id /* block */)a3;
- (BOOL)storeRecordDataInDatabase;
- (BOOL)wantsSegmentedDownloads;
- (void)estimateItemSizeForSummary:(id)a0 account:(id)a1;
- (id)importWillBegin;
- (id)importDidEnd;
- (void)_importGoogleAccountWithUsername:(id)a0 completion:(id /* block */)a1;

@end
