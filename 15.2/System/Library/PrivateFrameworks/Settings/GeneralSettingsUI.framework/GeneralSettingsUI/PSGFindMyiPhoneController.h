@class NSObject;
@protocol OS_dispatch_semaphore;

@interface PSGFindMyiPhoneController : NSObject {
    NSObject<OS_dispatch_semaphore> *_stateChangeSem;
}

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)locatorStateDidChange:(id)a0;
- (BOOL)isFindMyiPhoneEnabled;
- (id)preferredFindMyiPhoneAccount;
- (BOOL)isFindMyiPhoneProvisioned;
- (void)enablePhoneLocatorWithCompletion:(id /* block */)a0;
- (void)disablePhoneLocatorWithMessageString:(id)a0 buttonTitle:(id)a1 presentingViewController:(id)a2 completion:(id /* block */)a3;

@end
