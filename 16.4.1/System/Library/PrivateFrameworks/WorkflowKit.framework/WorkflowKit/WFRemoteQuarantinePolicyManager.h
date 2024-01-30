@class CKContainer, NSBundle, CKDatabase;

@interface WFRemoteQuarantinePolicyManager : NSObject

@property (retain, nonatomic) CKContainer *container;
@property (retain, nonatomic) CKDatabase *database;
@property (readonly, nonatomic) NSBundle *localPolicyBundle;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)localizedString:(id)a0;
- (void)updatePolicyWithXPCActivity:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)deleteAssetBundlesExceptAssetWithIdentifier:(id)a0 error:(id *)a1;
- (id)latestRemotePolicyAssetBundle;
- (BOOL)persistAssetToDisk:(id)a0 error:(id *)a1;
- (id)policyAssetBundle;
- (id)policyString;
- (id)policyStringForBundleIfValid:(id)a0;
- (id)prepareDirectoryForAssetWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)processAsset:(id)a0 error:(id *)a1;

@end
