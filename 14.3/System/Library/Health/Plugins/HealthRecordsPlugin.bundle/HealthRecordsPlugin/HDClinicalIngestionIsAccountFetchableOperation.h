@class HDClinicalAccount;

@interface HDClinicalIngestionIsAccountFetchableOperation : HDClinicalIngestionPerAccountOperation

@property (nonatomic) BOOL accountFetchable;
@property (retain, nonatomic) HDClinicalAccount *refreshedAccount;

- (void).cxx_destruct;
- (void)main;
- (BOOL)_refreshAccountWithErrorString:(id *)a0;
- (BOOL)_verifyShouldFetchWithErrorString:(id *)a0;

@end
