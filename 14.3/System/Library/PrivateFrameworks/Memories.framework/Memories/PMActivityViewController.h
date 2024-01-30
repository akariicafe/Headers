@class UIViewController, NSString, PMAirplayActivity, UIBarButtonItem;
@protocol PMActivityViewControllerDelegate;

@interface PMActivityViewController : UIActivityViewController <PMAirplayActivityDelegate, UIActivityViewControllerObjectManipulationDelegate, PMActivityItemProviderDelegate, UIActivityViewControllerAirDropDelegate>

@property (retain, nonatomic) PMAirplayActivity *airplayActivity;
@property (nonatomic) unsigned long long backgroundTask;
@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (weak, nonatomic) id<PMActivityViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *presenter;

- (void)cancel;
- (void).cxx_destruct;
- (id)_customizationGroupsForActivityViewController:(id)a0;
- (void)setModalPresentationStyle:(long long)a0;
- (void)activityViewControllerWillStartAirdropTransfer:(id)a0;
- (void)activityViewControllerDidFinishAirdropTransfer:(id)a0;
- (void)setCompletionWithItemsHandler:(id /* block */)a0;
- (void)viewWillLayoutSubviews;
- (void)exportFailed;
- (void)updateVisibleShareActions;
- (void)exportWillBegin;
- (id)initWithActivityItems:(id)a0 applicationActivities:(id)a1 barButtonItem:(id)a2 parentViewController:(id)a3;

@end
