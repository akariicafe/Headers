@class NSString, SBSharedModalAlertItemPresenter;

@interface SBUnlockedAlertItemPresenter : NSObject <SBAlertItemPresenter> {
    SBSharedModalAlertItemPresenter *_modalAlertPresenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissAlertItem:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)canPresentMultipleAlertItemsSimultaneously;
- (id)initWithSharedModalAlertItemPresenter:(id)a0;
- (void).cxx_destruct;
- (BOOL)presentsAlertItemsModally;
- (void)presentAlertItem:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
