@class NSHashTable, SFAutoFillOneTimeCode, NSObject, IMOneTimeCodeAccelerator;
@protocol OS_dispatch_queue, SFAppAutoFillOneTimeCodeProviderDelegate;

@interface SFAppAutoFillOneTimeCodeProvider : NSObject {
    IMOneTimeCodeAccelerator *_oneTimeCodeAccelerator;
    NSObject<OS_dispatch_queue> *_internalQueue;
    SFAutoFillOneTimeCode *_currentOneTimeCode;
    NSHashTable *_observers;
}

@property (weak, nonatomic) id<SFAppAutoFillOneTimeCodeProviderDelegate> delegate;
@property (readonly, nonatomic) BOOL hasOneTimeCode;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)currentOneTimeCodeForWebBrowserWithWebsiteFrameURLs:(id)a0;
- (void)consumeCurrentOneTimeCode;
- (void)_processOneTimeCode:(id)a0;
- (void)_validateCurrentOneTimeCode;
- (id)_secureURLWithDomain:(id)a0;
- (BOOL)_validateURL:(id)a0 withURLFromOriginBoundCode:(id)a1;
- (id)currentOneTimeCodeWithAuditToken:(struct { unsigned int x0[8]; })a0 website:(id)a1;

@end
