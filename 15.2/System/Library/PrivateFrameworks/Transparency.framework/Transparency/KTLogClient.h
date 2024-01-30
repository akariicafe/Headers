@class NSURL;

@interface KTLogClient : TransparencyLogClient

@property (retain) NSURL *queryURI;
@property (retain) NSURL *publicKeysURI;
@property (retain) NSURL *revisionLogProofURI;
@property BOOL configured;
@property double expirationTime;
@property (retain) NSURL *consistencyProofURI;

+ (id)configBagFileName;
+ (id)configBagRequest;
+ (id)configBagURL;
+ (id)formatEventName:(id)a0 state:(id)a1;
+ (id)formatEventName:(id)a0 application:(id)a1 state:(id)a2;

- (void)configure:(id /* block */)a0;
- (id)copyConfigurationBag:(id *)a0;
- (BOOL)validateConfigEntries:(id)a0 error:(id *)a1;
- (void)clearState:(id *)a0;
- (void)downloadPublicKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)downloadQuery:(id)a0 uuid:(id)a1 retry:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)readConfigFromDisk:(id *)a0;
- (BOOL)validateConfigBagCertificates:(id)a0 error:(id *)a1;
- (void)fetchMessage:(id)a0 uri:(id)a1 uuid:(id)a2 application:(id)a3 completionHandler:(id /* block */)a4;
- (void)fetchConsistencyProof:(id)a0 uuid:(id)a1 completionHandler:(id /* block */)a2;
- (void)downloadConsistencyProof:(id)a0 uuid:(id)a1 retry:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)fetchRevisionLogInclusionProof:(id)a0 uuid:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchQuery:(id)a0 uuid:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)configureFromNetworkBag:(id)a0 error:(id *)a1;
- (BOOL)validateConfigBagEntries:(id)a0 error:(id *)a1;
- (void)downloadRevisionLogInclusionProof:(id)a0 uuid:(id)a1 retry:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (BOOL)configureWithDisk:(id *)a0;
- (BOOL)configurationExpired;
- (void)downloadMessage:(id)a0 uri:(id)a1 uuid:(id)a2 application:(id)a3 retry:(BOOL)a4 completionHandler:(id /* block */)a5;
- (BOOL)processConfigBagData:(id)a0 error:(id *)a1;
- (void)fetchPublicKeys:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)validateConfigBagSignature:(id)a0 error:(id *)a1;
- (BOOL)writeConfigToDisk:(id)a0 error:(id *)a1;

@end
