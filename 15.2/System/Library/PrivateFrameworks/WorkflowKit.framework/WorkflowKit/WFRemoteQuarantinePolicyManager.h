@class CKContainer, NSBundle, CKDatabase;

@interface WFRemoteQuarantinePolicyManager : NSObject

@property (retain, nonatomic) CKContainer *container;
@property (retain, nonatomic) CKDatabase *database;
@property (readonly, nonatomic) NSBundle *localPolicyBundle;

+ (id)sharedManager;

- (id)localizedString:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)processAsset:(id)a0 error:(id *)a1;
- (void)updatePolicyWithXPCActivity:(id)a0 completionHandler:(id /* block */)a1;
- (id)policyString;
- (id)policyAssetBundle;
- (id)latestRemotePolicyAssetBundle;
- (id)policyStringForBundleIfValid:(id)a0;
- (BOOL)persistAssetToDisk:(id)a0 error:(id *)a1;
- (BOOL)deleteAssetBundlesExceptAssetWithIdentifier:(id)a0 error:(id *)a1;
- (id)prepareDirectoryForAssetWithIdentifier:(id)a0 error:(id *)a1;

@end
