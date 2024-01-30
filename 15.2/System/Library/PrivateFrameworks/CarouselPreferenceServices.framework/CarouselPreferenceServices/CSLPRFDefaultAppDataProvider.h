@class NSString, CSLPRFNanoAppRegistryAppDataProvider;
@protocol CSLPRFAppDataProviderDelegate;

@interface CSLPRFDefaultAppDataProvider : NSObject <CSLPRFAppDataProviderDelegate, CSLPRFAppDataProvider>

@property (readonly, nonatomic) BOOL isStandAloneStoreCompatible;
@property (readonly, nonatomic) CSLPRFNanoAppRegistryAppDataProvider *nanoAppRegistryDataProvider;
@property (weak, nonatomic) id<CSLPRFAppDataProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)loadAppsWithCompletion:(id /* block */)a0 completionQueue:(id)a1;
- (void)dataProviderDidChange:(id)a0;
- (void)loadAppsWithCompletion:(id /* block */)a0;
- (void)_appsDidChange;
- (id)displayNameForWatchApp:(id)a0;
- (void)enumerateInstalledApplicationsOnPairedDeviceWithBlock:(id /* block */)a0;
- (void)_appConduitLoadApps:(id)a0 withCompletion:(id /* block */)a1 completionQueue:(id)a2;

@end
