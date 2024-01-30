@class NSURL;

@interface KTLogClient : TransparencyLogClient

@property (retain) NSURL *queryURI;
@property (retain) NSURL *publicKeysURI;
@property (retain) NSURL *revisionLogProofURI;
@property BOOL configured;
@property double expirationTime;
@property (retain) NSURL *consistencyProofURI;

+ (id)configBagURL;
+ (id)configBagRequest;
+ (id)formatEventName:(id)a0 state:(id)a1;
+ (id)formatEventName:(id)a0 application:(id)a1 state:(id)a2;

- (void)clearState:(id *)a0;
- (void).cxx_destruct;
- (void)configure:(id /* block */)a0;
- (BOOL)validateConfigEntries:(id)a0 error:(id *)a1;
- (BOOL)validateConfigBagCertificates:(id)a0 error:(id *)a1;
- (BOOL)validateConfigBagSignature:(id)a0 error:(id *)a1;
- (id)readConfigFromDisk:(id *)a0;
- (BOOL)validateConfigBagEntries:(id)a0 error:(id *)a1;
- (BOOL)processConfigBagData:(id)a0 error:(id *)a1;
- (BOOL)writeConfigToDisk:(id)a0 error:(id *)a1;
- (BOOL)configurationExpired;
- (BOOL)configureWithDisk:(id *)a0;
- (BOOL)configureFromNetworkBag:(id)a0 error:(id *)a1;
- (void)fetchMessage:(id)a0 uri:(id)a1 uuid:(id)a2 application:(id)a3 completionHandler:(id /* block */)a4;
- (void)downloadMessage:(id)a0 uri:(id)a1 uuid:(id)a2 application:(id)a3 retry:(BOOL)a4 completionHandler:(id /* block */)a5;
- (id)copyConfigurationBag:(id *)a0;
- (void)fetchPublicKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchQuery:(id)a0 uuid:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchConsistencyProof:(id)a0 uuid:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchRevisionLogInclusionProof:(id)a0 uuid:(id)a1 completionHandler:(id /* block */)a2;
- (void)downloadQuery:(id)a0 uuid:(id)a1 retry:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)downloadConsistencyProof:(id)a0 uuid:(id)a1 retry:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)downloadRevisionLogInclusionProof:(id)a0 uuid:(id)a1 retry:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)downloadPublicKeys:(id)a0 completionHandler:(id /* block */)a1;

@end
