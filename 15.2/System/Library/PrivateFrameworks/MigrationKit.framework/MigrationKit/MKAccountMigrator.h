@class NSString, ACAccountStore, MFAccountValidator, NSObject;
@protocol OS_dispatch_queue;

@interface MKAccountMigrator : NSObject <MFAccountValidatorDelegate> {
    ACAccountStore *_accountStore;
    MFAccountValidator *_accountValidator;
    unsigned long long _operationCount;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)operationCount;
- (void).cxx_destruct;
- (id)init;
- (void)import:(id)a0;
- (void)accountValidator:(id)a0 finishedValidationOfAccount:(id)a1 usedSSL:(BOOL)a2;
- (void)importDataEncodedInJSON:(id)a0;
- (void)accountStoreDidImportAccount;

@end
