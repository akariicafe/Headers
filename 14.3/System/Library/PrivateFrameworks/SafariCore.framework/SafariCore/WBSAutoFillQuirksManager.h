@class WBSRemotePlistController, WBSChangePasswordURLManager, WBSPasswordAuditingEligibleDomainsManager, WBSAutoFillAssociatedDomainsManager, NSString, WBSPasswordGenerationManager;

@interface WBSAutoFillQuirksManager : NSObject <WBSRemotePlistControllerDelegate> {
    WBSPasswordGenerationManager *_passwordGenerationManager;
    WBSAutoFillAssociatedDomainsManager *_associatedDomainsManager;
    WBSRemotePlistController *_remotePlistController;
    WBSPasswordAuditingEligibleDomainsManager *_passwordAuditingEligibleDomainsManager;
    WBSChangePasswordURLManager *_changePasswordURLManager;
}

@property (readonly, nonatomic) WBSPasswordGenerationManager *passwordGenerationManager;
@property (readonly, nonatomic) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager;
@property (readonly, nonatomic) WBSPasswordAuditingEligibleDomainsManager *passwordAuditingEligibleDomainsManager;
@property (readonly, nonatomic) WBSChangePasswordURLManager *changePasswordURLManager;
@property (nonatomic) BOOL shouldAttemptToDownloadConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)prepareForTermination;
- (id)_passwordRequirementsByDomainFromCurrentSnapshot;
- (id)_domainsWithAssociatedCredentialsFromCurrentSnapshot;
- (id)_domainsToConsiderIdenticalFromCurrentSnapshot;
- (id)_domainsIneligibleForPasswordAuditingFromCurrentSnapshot;
- (id)_changePasswordURLStringsFromCurrentSnapshot;
- (void)didDownloadPlistForRemotePlistController:(id)a0;
- (id)initWithBuiltInQuirksURL:(id)a0 downloadsDirectoryURL:(id)a1 resourceName:(id)a2 resourceVersion:(id)a3 updateDateDefaultsKey:(id)a4 updateInterval:(double)a5;
- (void)beginLoadingQuirksFromDisk;
- (BOOL)isAutomaticLoginDisallowedOnURL:(id)a0;
- (BOOL)isStreamlinedLoginDisallowedOnURL:(id)a0;

@end
