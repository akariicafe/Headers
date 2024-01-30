@class NSString, SBAlertItemPresenterWindowSceneResolver;

@interface SBUnlockedAlertItemPresenter : NSObject <SBAlertItemPresenter>

@property (retain, nonatomic) SBAlertItemPresenterWindowSceneResolver *windowSceneResolver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)windowSceneDidDisconnect:(id)a0;
- (BOOL)presentsAlertItemsModally;
- (BOOL)canPresentMultipleAlertItemsSimultaneously;
- (void)dismissAlertItem:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)presentAlertItem:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)windowSceneDidConnect:(id)a0 withSharedModalAlertItemPresenter:(id)a1;
- (id)initWithSharedModalAlertItemPresenter:(id)a0 windowSceneManager:(id)a1;
- (void).cxx_destruct;

@end
