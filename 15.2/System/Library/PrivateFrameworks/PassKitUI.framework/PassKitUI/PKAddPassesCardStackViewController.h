@class NSString, NSArray, PKPassGroupStackView, PKGroupsController, PKPassesXPCContainer;
@protocol PKAddPassesCardStackViewControllerDelegate;

@interface PKAddPassesCardStackViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDelegate, PKPassGroupStackViewDatasource, PKPaymentSetupViewControllerDelegate, PKPassPersonalizationViewControllerDelegate, UIScrollViewDelegate> {
    NSArray *_passes;
    PKPassesXPCContainer *_passesContainer;
    NSArray *_passDataArray;
    PKGroupsController *_groupsController;
    PKPassGroupStackView *_passGroupStackView;
    NSString *_personalizatonToken;
    unsigned long long _presentationSource;
}

@property (weak, nonatomic) id<PKAddPassesCardStackViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)groupAtIndex:(unsigned long long)a0;
- (void)groupsController:(id)a0 didInsertGroup:(id)a1 atIndex:(unsigned long long)a2;
- (void)groupsController:(id)a0 didMoveGroup:(id)a1 fromIndex:(unsigned long long)a2 toIndex:(unsigned long long)a3;
- (void)groupsController:(id)a0 didRemoveGroup:(id)a1 atIndex:(unsigned long long)a2;
- (unsigned long long)indexOfSeparationGroup;
- (void)dealloc;
- (unsigned long long)indexOfGroup:(id)a0;
- (unsigned long long)numberOfGroups;
- (void)_addButtonPressed:(id)a0;
- (void)_cancelButtonPressed:(id)a0;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (void)passPersonalizationViewController:(id)a0 didFinishPersonalizingPass:(id)a1;
- (void)resetBrightness;
- (id)initWithPasses:(id)a0 orPassesContainer:(id)a1 fromPresentationSource:(unsigned long long)a2;
- (void)evaluateBrightness;
- (unsigned long long)suppressedContent;
- (BOOL)hasDiscoveryContent;
- (BOOL)supportsExternalPresentation;
- (BOOL)isInField;
- (void)reloadGroupsForGroupStackView:(id)a0;
- (void)groupStackView:(id)a0 deleteConfirmedForPass:(id)a1;
- (void)groupStackViewDidBeginReordering:(id)a0;
- (void)groupStackViewDidEndReordering:(id)a0;
- (void)groupStackView:(id)a0 didTransitionToState:(long long)a1 animated:(BOOL)a2;
- (void)_configureNavigationItemTitle;
- (void)_configureAddOrNextButtonItemAsPending:(BOOL)a0;
- (void)_addPassesWithCompletion:(id /* block */)a0;
- (void)_nextButtonPressedForPersonalization:(id)a0;
- (void)_nextButtonPressedForAutomaticPresentation:(id)a0;

@end
