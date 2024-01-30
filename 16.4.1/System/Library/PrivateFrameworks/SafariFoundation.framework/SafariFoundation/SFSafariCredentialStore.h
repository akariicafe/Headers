@interface SFSafariCredentialStore : NSObject

+ (void)bestDomainForAppID:(id)a0 completionHandler:(id /* block */)a1;
+ (id)bestDomainForAutoFillFromDomains:(id)a0 appID:(id)a1;
+ (void)getAllApprovedSharedWebCredentialsEntries:(id /* block */)a0;
+ (void)getAllowedActionForAppCredentialsWithAppID:(id)a0 websiteURL:(id)a1 user:(id)a2 password:(id)a3 completionHandler:(id /* block */)a4;
+ (void)getCredentialsForAppWithAppID:(id)a0 frameIdentifier:(id)a1 externallyVerifiedAndApprovedSharedWebCredentialDomains:(id)a2 websiteURL:(id)a3 completionHandler:(id /* block */)a4;
+ (id)titleForPasswordCredentialIdentity:(id)a0 formURL:(id)a1;
+ (void)getApprovedSharedWebCredentialsEntriesForAppWithAppID:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getCredentialsForAppWithAppID:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getCredentialsForAppWithAppID:(id)a0 externallyVerifiedAndApprovedSharedWebCredentialDomains:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getCredentialsForAppWithAppID:(id)a0 websiteURL:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)isAppAutoFillAvailable;
+ (id)textSuggestionHeaderForExternalCredential:(id)a0;
+ (void)_getCredentialsForAppWithApprovedAndValidSharedWebCredentialsDatabaseEntries:(id)a0 websiteURL:(id)a1 isEntitledWebBrowser:(BOOL)a2 completionHandler:(id /* block */)a3;
+ (BOOL)_appIsEntitledWebBrowser:(id)a0;
+ (void)_approvedAndValidSharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_approvedSharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)a0 completionHandler:(id /* block */)a1;
+ (id)_bestDomainFromApprovedDomainsForWebCredentials:(id)a0 appLinks:(id)a1 otherServices:(id)a2 appID:(id)a3 appNames:(id)a4 allDomains:(id *)a5;
+ (id)_credentialProviderExtensionHelperProxy;
+ (id)_credentialsForWebBrowserWithWebsiteURL:(id)a0 webFrameIdentifier:(id)a1;
+ (id)_credentialsMatchingSharedWebCredentialsDatabaseEntries:(id)a0 websiteURL:(id)a1 savedAccounts:(id)a2;
+ (void)_fetchKeychainCredentialsIfRequiredWithSharedWebCredentialsDatabaseEntries:(id)a0 websiteURL:(id)a1 webFrameIdentifier:(id)a2 isEntitledWebBrowser:(BOOL)a3 completion:(id /* block */)a4;
+ (void)_getAllowedActionForAppCredentialsWithAppID:(id)a0 websiteURL:(id)a1 user:(id)a2 password:(id)a3 shouldAnalyzeExistingCredentials:(BOOL)a4 completionHandler:(id /* block */)a5;
+ (void)_getApprovedSharedWebCredentialsEntriesSortedByHighestValueForAppWithAppID:(id)a0 maximumNumberOfEntriesToReturn:(unsigned long long)a1 completionHandler:(id /* block */)a2;
+ (void)_getBundleIDForPrimaryCredentialProviderWithCompletionHandler:(id /* block */)a0;
+ (void)_getCredentialsForAppWithApprovedAndValidSharedWebCredentialsDatabaseEntries:(id)a0 websiteURL:(id)a1 webFrameIdentifier:(id)a2 isEntitledWebBrowser:(BOOL)a3 completionHandler:(id /* block */)a4;
+ (void)_getDomainsApprovedForWebCredentials:(id *)a0 domainsApprovedForAppLinks:(id *)a1 domainsApprovedForOtherServices:(id *)a2 fromDatabaseEntries:(id)a3;
+ (void)_getExternalCredentialsMatchingSharedWebCredentialsDatabaseEntries:(id)a0 websiteURL:(id)a1 isEntitledWebBrowser:(BOOL)a2 completion:(id /* block */)a3;
+ (id)_highLevelDomainsFromDatabaseEntries:(id)a0;
+ (BOOL)_savedAccount:(id)a0 isRelatedToEntryHighLevelDomains:(id)a1 andWebsiteURL:(id)a2;
+ (long long)_scoreForDomain:(id)a0 domainsApprovedForWebCredentials:(id)a1 domainsApprovedForAppLinks:(id)a2 domainsApprovedForOtherServices:(id)a3 appNames:(id)a4;
+ (void)_sharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_sortCredentials:(id)a0 usingApprovedSharedWebCredentialsDatabaseEntries:(id)a1;
+ (id)appNamesForAppID:(id)a0;
+ (void)getAllApprovedSharedWebCredentialsEntriesSortedByHighestValueForAppWithAppID:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getAllCredentialsWithCompletionHandler:(id /* block */)a0;
+ (void)getApprovedSharedWebCredentialsEntriesSortedByHighestValueForAppWithAppID:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getCanSaveCredentialsWithAppID:(id)a0 websiteURL:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getCredentialsForAppWithAppID:(id)a0 externallyVerifiedAndApprovedSharedWebCredentialDomains:(id)a1 websiteURL:(id)a2 completionHandler:(id /* block */)a3;
+ (BOOL)isRemoteAutoFillAvailable;

@end
