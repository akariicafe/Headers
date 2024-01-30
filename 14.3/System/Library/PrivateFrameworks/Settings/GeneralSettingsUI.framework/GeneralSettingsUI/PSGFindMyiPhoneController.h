@class NSObject;
@protocol OS_dispatch_semaphore;

@interface PSGFindMyiPhoneController : NSObject {
    NSObject<OS_dispatch_semaphore> *_stateChangeSem;
}

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)locatorStateDidChange:(id)a0;
- (void)disablePhoneLocatorWithMessageString:(id)a0 buttonTitle:(id)a1 presentingViewController:(id)a2 completion:(id /* block */)a3;
- (BOOL)isFindMyiPhoneEnabled;
- (id)preferredFindMyiPhoneAccount;
- (BOOL)isFindMyiPhoneProvisioned;
- (void)enablePhoneLocatorWithCompletion:(id /* block */)a0;

@end
