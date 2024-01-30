@class NSString, NSArray, PKPassGroupStackView, PKGroupsController;
@protocol PKAddPassesCardStackViewControllerDelegate;

@interface PKAddPassesCardStackViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDelegate, PKPassGroupStackViewDatasource, PKPaymentSetupViewControllerDelegate, PKPassPersonalizationViewControllerDelegate, UIScrollViewDelegate> {
    NSArray *_passes;
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

- (unsigned long long)indexOfGroup:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)numberOfGroups;
- (void)_cancelButtonPressed:(id)a0;
- (void)dealloc;
- (void)passPersonalizationViewController:(id)a0 didFinishPersonalizingPass:(id)a1;
- (BOOL)isInField;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_configureNavigationItemTitle;
- (void)_configureAddOrNextButtonItemAsPending:(BOOL)a0;
- (void)_nextButtonPressedForPersonalization:(id)a0;
- (void)_nextButtonPressedForAutomaticPresentation:(id)a0;
- (void)_addButtonPressed:(id)a0;
- (BOOL)supportsExternalPresentation;
- (unsigned long long)suppressedContent;
- (void)resetBrightness;
- (id)initWithPasses:(id)a0 passDataArray:(id)a1 presentationSource:(unsigned long long)a2;
- (id)groupAtIndex:(unsigned long long)a0;
- (void)evaluateBrightness;
- (void)reloadGroupsForGroupStackView:(id)a0;
- (void)groupStackView:(id)a0 deleteConfirmedForPass:(id)a1;
- (void)groupStackViewDidBeginReordering:(id)a0;
- (void)groupStackViewDidEndReordering:(id)a0;
- (void)groupsController:(id)a0 didInsertGroup:(id)a1 atIndex:(unsigned long long)a2;
- (void)groupsController:(id)a0 didMoveGroup:(id)a1 fromIndex:(unsigned long long)a2 toIndex:(unsigned long long)a3;
- (void)groupsController:(id)a0 didRemoveGroup:(id)a1 atIndex:(unsigned long long)a2;
- (unsigned long long)indexOfSeparationGroup;
- (void)groupStackView:(id)a0 didTransitionToState:(long long)a1 animated:(BOOL)a2;
- (BOOL)hasDiscoveryContent;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
