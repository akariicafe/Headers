@class NSMapTable, NSTimer, NSHashTable, SFAutoFillOneTimeCode, NSObject, IMOneTimeCodeAccelerator;
@protocol OS_dispatch_queue, SFAppAutoFillOneTimeCodeProviderDelegate;

@interface SFAppAutoFillOneTimeCodeProvider : NSObject {
    IMOneTimeCodeAccelerator *_oneTimeCodeAccelerator;
    NSObject<OS_dispatch_queue> *_internalQueue;
    SFAutoFillOneTimeCode *_currentOneTimeCodeFromMessages;
    NSHashTable *_observers;
    NSMapTable *_generatorObservers;
    NSTimer *_generatorTimer;
}

@property (weak, nonatomic) id<SFAppAutoFillOneTimeCodeProviderDelegate> delegate;
@property (readonly, nonatomic) BOOL hasOneTimeCode;

- (void)_stopGeneratorTimer;
- (void)_startGeneratorTimer;
- (id)_savedPasswordsForURL:(id)a0;
- (BOOL)_appWithAuditTokenIsWebBrowser:(struct { unsigned int x0[8]; })a0;
- (id)_secureURLWithDomain:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_validateCurrentOneTimeCode;
- (void)consumeCurrentOneTimeCode;
- (void)addObserver:(id)a0 forOneTimeCode:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_processOneTimeCodeFromMessages:(id)a0;
- (void)consumeOneTimeCode:(id)a0;
- (id)currentOneTimeCodesForWebBrowserWithWebsiteFrameURLs:(id)a0 fieldClassification:(long long)a1;
- (id)_associatedDomainEntriesForAppWithIdentifier:(id)a0;
- (BOOL)hasOneTimeCodeForAppWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (BOOL)_validateURL:(id)a0 withURLFromOriginBoundCode:(id)a1;
- (id)currentOneTimeCodeWithAuditToken:(struct { unsigned int x0[8]; })a0 website:(id)a1;
- (id)currentOneTimeCodesWithAuditToken:(struct { unsigned int x0[8]; })a0 website:(id)a1 usernameHint:(id)a2 fieldClassification:(long long)a3;
- (void)removeObserverForOneTimeCode:(id)a0;
- (id)_sortedOneTimeCodesFromSavedPasswords:(id)a0;

@end
