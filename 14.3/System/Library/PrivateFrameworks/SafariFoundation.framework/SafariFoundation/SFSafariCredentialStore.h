@interface SFSafariCredentialStore : NSObject

+ (void)getAllowedActionForAppCredentialsWithAppID:(id)a0 websiteURL:(id)a1 user:(id)a2 password:(id)a3 completionHandler:(id /* block */)a4;
+ (id)bestDomainForAutoFillFromDomains:(id)a0 appID:(id)a1;
+ (void)bestDomainForAppID:(id)a0 completionHandler:(id /* block */)a1;
+ (id)titleForPasswordCredentialIdentity:(id)a0 formURL:(id)a1;
+ (void)getCredentialsForAppWithAppID:(id)a0 externallyVerifiedAndApprovedSharedWebCredentialDomains:(id)a1 websiteURL:(id)a2 completionHandler:(id /* block */)a3;
+ (void)getAllApprovedSharedWebCredentialsEntries:(id /* block */)a0;
+ (void)_approvedSharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)isAppAutoFillAvailable;
+ (void)getCredentialsForAppWithAppID:(id)a0 websiteURL:(id)a1 completionHandler:(id /* block */)a2;
+ (void)_getCredentialsForAppWithApprovedAndValidSharedWebCredentialsDatabaseEntries:(id)a0 websiteURL:(id)a1 completionHandler:(id /* block */)a2;
+ (void)_approvedAndValidSharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_getExternalCredentialsMatchingSharedWebCredentialsDatabaseEntries:(id)a0 websiteURL:(id)a1 completion:(id /* block */)a2;
+ (id)_credentialsMatchingSharedWebCredentialsDatabaseEntries:(id)a0 websiteURL:(id)a1 savedPasswords:(id)a2;
+ (id)_highLevelDomainsFromDatabaseEntries:(id)a0;
+ (BOOL)_savedPassword:(id)a0 isRelatedToEntryHighLevelDomains:(id)a1 andWebsiteURL:(id)a2;
+ (void)_sortCredentials:(id)a0 usingApprovedSharedWebCredentialsDatabaseEntries:(id)a1;
+ (void)_getAllowedActionForAppCredentialsWithAppID:(id)a0 websiteURL:(id)a1 user:(id)a2 password:(id)a3 shouldAnalyzeExistingCredentials:(BOOL)a4 completionHandler:(id /* block */)a5;
+ (void)_getBundleIDForPrimaryCredentialProviderWithCompletionHandler:(id /* block */)a0;
+ (id)_bestDomainFromApprovedDomainsForWebCredentials:(id)a0 appLinks:(id)a1 otherServices:(id)a2 appID:(id)a3 allDomains:(id *)a4;
+ (void)getApprovedSharedWebCredentialsEntriesForAppWithAppID:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_sharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)a0 completionHandler:(id /* block */)a1;
+ (id)_credentialProviderExtensionHelperProxy;
+ (BOOL)isRemoteAutoFillAvailable;
+ (void)getCredentialsForAppWithAppID:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getCredentialsForAppWithAppID:(id)a0 externallyVerifiedAndApprovedSharedWebCredentialDomains:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getAllCredentialsWithCompletionHandler:(id /* block */)a0;
+ (void)getCanSaveCredentialsWithAppID:(id)a0 websiteURL:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getApprovedSharedWebCredentialsEntriesSortedByHighestValueForAppWithAppID:(id)a0 completionHandler:(id /* block */)a1;
+ (id)textSuggestionHeaderForExternalCredential:(id)a0;

@end
