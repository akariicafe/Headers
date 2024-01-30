@class NSArray, HRProfile;

@interface WDClinicalSampleAccountsLoader : NSObject

@property (copy, nonatomic) NSArray *cachedAccounts;
@property (retain, nonatomic) HRProfile *profile;
@property (copy, nonatomic) NSArray *accountDataBatches;

+ (id)knownAccountFiles;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)sampleAccountsAsSearchResults;
- (id)_sampleAccountForGatewayWithExternalID:(id)a0 error:(id *)a1;
- (void)_createAccountAndTriggerIngestForDataBatch:(id)a0 account:(id)a1 completion:(id /* block */)a2;
- (BOOL)_triggerIngestOfDataBatch:(id)a0 accountIdentifier:(id)a1 error:(id *)a2;
- (id)_createTemporaryFileForDataBatch:(id)a0 error:(id *)a1;
- (id)_providerForAccount:(id)a0;
- (id)_gatewayForAccount:(id)a0;
- (id)_parseAccounts;
- (void)loadFirstSampleAccountDataBatchForGatewayWithExternalID:(id)a0 completion:(id /* block */)a1;
- (id)providerForSampleDataSearchResultWithExternalID:(id)a0 error:(id *)a1;

@end
