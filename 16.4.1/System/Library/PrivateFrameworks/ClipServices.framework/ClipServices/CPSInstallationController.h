@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, CPSInstallationControllerDelegate, CPSAppInfoFetching;

@interface CPSInstallationController : NSObject <ASDClipSessionDelegate> {
    id<CPSAppInfoFetching> _appInfoFetcher;
    NSMutableDictionary *_sessionsByBundleID;
    NSMutableDictionary *_installPromisesBySessionID;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<CPSInstallationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)clipSession:(id)a0 didFailWithError:(id)a1;
- (void)clipSession:(id)a0 didUpdateProgress:(double)a1;
- (void)clipSessionDidCompleteSuccessfully:(id)a0;
- (void)clipSessionDidInstallPlaceholder:(id)a0;
- (BOOL)stopStallingCurrentInstallation;
- (id)_asdClipRequestWithSession:(id)a0;
- (id)_bundleIDFromSession:(id)a0;
- (void)_cancelClipSessionWithBundleID:(id)a0 completion:(id /* block */)a1;
- (void)_continueInstallForBundleID:(id)a0 session:(id)a1 completion:(id /* block */)a2;
- (void)_doneWithSession:(id)a0 error:(id)a1;
- (void)_getClipSessionForBundleID:(id)a0 sourceBundleID:(id)a1 forInstall:(BOOL)a2 completion:(id /* block */)a3;
- (void)_informDelegateDidInstallPlaceholder:(id)a0;
- (id)_placeholderArtworkForSession:(id)a0;
- (void)_prewarmDemoIPAWithBundleID:(id)a0 session:(id)a1 completion:(id /* block */)a2;
- (void)cancelPrewarmForBundleID:(id)a0 completion:(id /* block */)a1;
- (id)initWithAppInfoFetcher:(id)a0;
- (void)installClipWithBundleID:(id)a0 session:(id)a1 completion:(id /* block */)a2;
- (void)prewarmClipWithBundleID:(id)a0 session:(id)a1 completion:(id /* block */)a2;

@end
