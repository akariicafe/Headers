@class PDCPreflightManager, NSString, NSMutableDictionary, LSApplicationIdentity;
@protocol PDCPreflightRequestCanceling;

@interface SBApplicationPrivacyPreflightController : NSObject <BSDescriptionStreamable> {
    PDCPreflightManager *_privacyPreflightManager;
    LSApplicationIdentity *_applicationIdentity;
    NSMutableDictionary *_pendingCompletionsBySceneIdentifier;
    id<PDCPreflightRequestCanceling> _preflightCancelToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (void)_notePreflightFinishedWithResult:(unsigned long long)a0 cancelToken:(id)a1;
- (void)addPendingCompletion:(id /* block */)a0 forSceneIdentifier:(id)a1;
- (id)initWithPreflightManager:(id)a0 applicationIdentity:(id)a1;
- (void)notePreflightFinishedWithResult:(unsigned long long)a0;

@end
