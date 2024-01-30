@class NSHashTable, NSMapTable, NSTimer, WBSAutoFillAssociatedDomainsManager, SFAutoFillOneTimeCode, NSObject, IMOneTimeCodeAccelerator;
@protocol OS_dispatch_queue, SFAppAutoFillOneTimeCodeProviderDelegate;

@interface SFAppAutoFillOneTimeCodeProvider : NSObject {
    IMOneTimeCodeAccelerator *_messagesOneTimeCodeAccelerator;
    NSObject<OS_dispatch_queue> *_internalQueue;
    SFAutoFillOneTimeCode *_currentReceivedOneTimeCode;
    NSHashTable *_observers;
    NSMapTable *_generatorObservers;
    NSTimer *_generatorTimer;
}

@property (weak, nonatomic) id<SFAppAutoFillOneTimeCodeProviderDelegate> delegate;
@property (retain, nonatomic) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager;

- (void)consumeCurrentOneTimeCode;
- (void)_notifyOneTimeCodeObserver;
- (id)currentOneTimeCodesWithAppIdentifier:(id)a0 website:(id)a1 usernameHint:(id)a2 fieldClassification:(long long)a3;
- (id)currentOneTimeCodesForWebBrowserWithWebsiteFrameURLs:(id)a0 fieldClassification:(long long)a1;
- (void)addObserver:(id)a0;
- (void)_validateCurrentOneTimeCode;
- (void)_processOneTimeCodeFromMessages:(id)a0;
- (BOOL)_validateURL:(id)a0 withURLFromOriginBoundCode:(id)a1;
- (id)initWithMessagesOneTimeCodeSupport:(BOOL)a0;
- (void)_stopGeneratorTimer;
- (id)_sortedOneTimeCodesFromSavedAccounts:(id)a0;
- (id)currentOneTimeCodesWithAuditToken:(struct { unsigned int x0[8]; })a0 website:(id)a1 usernameHint:(id)a2 fieldClassification:(long long)a3;
- (id)_associatedDomainEntriesForAppWithIdentifier:(id)a0;
- (BOOL)_appWithAppIdentifierIsWebBrowser:(id)a0;
- (void)_startGeneratorTimer;
- (BOOL)hasOneTimeCodeForAppWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)removeObserver:(id)a0;
- (void)didFocusOneTimeCodeField;
- (id)_secureURLWithDomain:(id)a0;
- (void)removeObserverForOneTimeCode:(id)a0;
- (void)consumeMessagesOneTimeCodeWithGUID:(id)a0;
- (void)addObserver:(id)a0 forOneTimeCode:(id)a1;
- (id)init;
- (void)consumeOneTimeCode:(id)a0;
- (id)_savedAccountsWithPasswordsForURL:(id)a0;
- (void).cxx_destruct;

@end
