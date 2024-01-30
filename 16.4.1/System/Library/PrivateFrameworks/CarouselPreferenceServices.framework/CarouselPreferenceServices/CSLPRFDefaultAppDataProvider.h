@class NSString;
@protocol CSLPRFAppDataProviderDelegate, CSLPRFApplicationLibrary;

@interface CSLPRFDefaultAppDataProvider : NSObject <CSLPRFApplicationLibraryObserving, CSLPRFAppDataProvider> {
    id<CSLPRFApplicationLibrary> _applicationLibrary;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_didLoadApps;
}

@property (weak, nonatomic) id<CSLPRFAppDataProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)loadAppsWithCompletion:(id /* block */)a0 completionQueue:(id)a1;
- (void)applicationLibrary:(id)a0 didAddApplications:(id)a1;
- (void)applicationLibrary:(id)a0 didRemoveApplications:(id)a1;
- (void)applicationLibrary:(id)a0 didUpdateApplications:(id)a1;
- (void)loadAppsWithCompletion:(id /* block */)a0;

@end
