@class NSString, NARApplicationWorkspace;
@protocol CSLPRFAppDataProviderDelegate;

@interface CSLPRFNanoAppRegistryAppDataProvider : NSObject <CSLPRFAppDataProvider> {
    NARApplicationWorkspace *_workspace;
}

@property (weak, nonatomic) id<CSLPRFAppDataProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)loadAppsWithCompletion:(id /* block */)a0 completionQueue:(id)a1;
- (void)loadAppsWithCompletion:(id /* block */)a0;
- (BOOL)_isAppEligibleForInclusion:(id)a0;
- (id)_localizedNameForWatchBundleID:(id)a0;
- (id)_nameForWatchBundleID:(id)a0;
- (BOOL)_appIsFirstParty:(id)a0;
- (void)_appsDidChange;

@end
