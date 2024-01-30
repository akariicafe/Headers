@class UINavigationController, NSString, PXGadgetSpec, PXStoryFeedConfiguration, PXProgrammaticNavigationDestination, PXStoryFeedViewLayoutSpecManager, PXStoryFeedViewController;
@protocol PXGadgetDelegate, PXProgrammaticNavigationParticipant;

@interface PXStoryFeedGadget : NSObject <PXProgrammaticNavigationParticipant, PXStoryFeedGadget> {
    BOOL _didLoadNavigationParticipant;
}

@property (readonly, nonatomic) PXStoryFeedConfiguration *configuration;
@property (readonly, nonatomic) PXStoryFeedViewController *feedViewController;
@property (readonly, nonatomic) PXStoryFeedViewLayoutSpecManager *specManager;
@property (readonly, nonatomic) id<PXProgrammaticNavigationParticipant> navigationParticipant;
@property (readonly, nonatomic) UINavigationController *navigationController;
@property (nonatomic) BOOL hasAppeared;
@property (readonly, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentRect;

- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (void)userDidSelectAccessoryButton:(id)a0;
- (void)gadgetControllerHasAppeared;
- (void)gadgetControllerHasDisappeared;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithConfiguration:(id)a0;
- (id)contentViewController;
- (void).cxx_destruct;
- (id)init;
- (id)nextExistingParticipantOnRouteToDestination:(id)a0;
- (void)_loadFeedViewControllerIfNeeded;
- (void)_loadSpecManagerIfNeeded;
- (void)_navigateToFullFeedAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
