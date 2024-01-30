@class NSString, SBSharedModalAlertItemPresenter;

@interface SBLockedModalAlertItemPresenter : NSObject <SBAlertItemPresenter, SBLockScreenActionProvider> {
    SBSharedModalAlertItemPresenter *_modalAlertPresenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canPresentMultipleAlertItemsSimultaneously;
- (void).cxx_destruct;
- (id)initWithSharedModalAlertItemPresenter:(id)a0;
- (BOOL)presentsAlertItemsModally;
- (void)dismissAlertItem:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)lockScreenActionContext;
- (void)presentAlertItem:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
