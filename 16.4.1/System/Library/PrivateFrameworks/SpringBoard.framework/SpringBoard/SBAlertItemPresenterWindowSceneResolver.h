@class NSMapTable, SBWindowSceneManager;

@interface SBAlertItemPresenterWindowSceneResolver : NSObject

@property (readonly, retain, nonatomic) NSMapTable *modalAlertPresenters;
@property (readonly, retain, nonatomic) SBWindowSceneManager *windowSceneManager;

- (void)windowSceneDidDisconnect:(id)a0;
- (void)windowSceneDidConnect:(id)a0 withSharedModalAlertItemPresenter:(id)a1;
- (id)resolvedSharedModalAlertItemPresenterForAlertItem:(id)a0;
- (id)initWithSharedModalAlertItemPresenter:(id)a0 windowSceneManager:(id)a1;
- (void).cxx_destruct;

@end
