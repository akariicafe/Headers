@class MCDPCContainer, NSString, NSArray, NSOperationQueue, MCDPCModel;

@interface MCDPlayableContentViewController : UINavigationController <UINavigationControllerDelegate> {
    MCDPCModel *_model;
    MCDPCContainer *_rootContainer;
    NSArray *_stackToRebuild;
    BOOL _hasBrowsableContent;
    BOOL _hasSectionedContent;
    BOOL _hasLoaded;
}

@property (retain, nonatomic) NSOperationQueue *modelInvalidationQueue;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBundleID:(id)a0;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setupView;
- (void)refreshNavigationStackForLaunch;
- (id)_createRootViewController;
- (id)_createSectionedRootViewController;
- (void)_modelDidInvalidate:(id)a0;
- (void)_nowPlayingIdentifiersChanged:(id)a0;
- (void)_populateStack;
- (id)currentStack;
- (id)initWithBundleID:(id)a0 stack:(id)a1;

@end
