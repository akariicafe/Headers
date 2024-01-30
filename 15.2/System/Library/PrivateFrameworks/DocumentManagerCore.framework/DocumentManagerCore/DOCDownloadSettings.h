@class NSArray, NSError, FPItem;

@interface DOCDownloadSettings : NSObject

@property (retain) NSArray *providers;
@property (retain) NSError *providersObserverError;
@property (retain) id providersObserverContext;
@property (retain) FPItem *currentDefaultDownloadsLocationItem;

- (void).cxx_destruct;
- (id)init;
- (void)fetchProvidersSuitableForDownloads:(id /* block */)a0;
- (void)fetchDefaultDownloadsLocationItem:(id /* block */)a0;
- (void)setDefaultDownloadsItemForProviderDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)setDefaultDownloadsLocationItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchDefaultFallbackDownloadLocationWithPreferredDomain:(id)a0 completion:(id /* block */)a1;
- (void)_removeCurrentDownloadsLocationFromFavorites;
- (BOOL)_saveDownloadFolderItem:(id)a0 error:(id *)a1;
- (id)_createErrorForCode:(long long)a0 localizedDescription:(id)a1 underlyingError:(id)a2;
- (void)_createDefaultDownloadsFolderInParent:(id)a0 completion:(id /* block */)a1;
- (void)_rootItemOfPreferredProviderInDomains:(id)a0 completion:(id /* block */)a1;
- (void)_fetchProviders:(id /* block */)a0;
- (void)_fetchAvailableProviders:(id /* block */)a0;
- (void)_preferredProvidersIn:(id)a0 completion:(id /* block */)a1;
- (void)_validatePreferredProvider:(id)a0 completion:(id /* block */)a1;
- (void)resetDefaultDownloadsLocationItem;

@end
