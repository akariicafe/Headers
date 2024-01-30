@class NSString, UIViewController, UIContextMenuInteraction;
@protocol PLExpandedPlatterInteractionHosting, PLExpandedPlatterInteractionManagerDelegate;

@interface PLExpandedPlatterInteractionManager : NSObject <UIContextMenuInteractionDelegate_Private> {
    UIContextMenuInteraction *_contextMenuInteraction;
    id /* block */ _cachedCompletion;
    struct { unsigned char delegateImplementsIdentifier : 1; unsigned char delegateImplementsContentViewController : 1; unsigned char delegateImplementsMenu : 1; unsigned char delegateImplementsShouldBeginInteraction : 1; unsigned char delegateImplementsWillPresentContent : 1; unsigned char delegateImplementsShouldCommitInteraction : 1; unsigned char delegateImplementsShouldAllowInitialSwipeToDismiss : 1; unsigned char delegateImplementsWillDismissContent : 1; unsigned char delegateImplementsShouldAllowLongPressGesture : 1; } _expandedPlatterInteractionManagerDelegateFlags;
    BOOL _initialPanOccurred;
}

@property (readonly, weak, nonatomic) UIViewController<PLExpandedPlatterInteractionHosting> *presentingViewController;
@property (readonly, weak, nonatomic) id<PLExpandedPlatterInteractionManagerDelegate> delegate;
@property (readonly, nonatomic, getter=reachedForceThreshold) BOOL reachedForceThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dismiss;
- (unsigned long long)_activationMethodForContextMenuInteraction:(id)a0;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (id)_contextMenuConfigurationIdentifier;
- (void)updateVisibleMenuWithBlock:(id /* block */)a0;
- (void)presentAtLocation:(struct CGPoint { double x0; double x1; })a0 completion:(id /* block */)a1;
- (id)_identifier;
- (void)_contextMenuInteraction:(id)a0 shouldPresentWithCompletion:(id /* block */)a1;
- (BOOL)_contextMenuInteractionShouldAllowSwipeToDismiss:(id)a0;
- (id)contextMenuInteraction:(id)a0 configuration:(id)a1 highlightPreviewForItemWithIdentifier:(id)a2;
- (void)_setPresentingViewControllerHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithPresentingViewController:(id)a0 delegate:(id)a1;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void).cxx_destruct;

@end
