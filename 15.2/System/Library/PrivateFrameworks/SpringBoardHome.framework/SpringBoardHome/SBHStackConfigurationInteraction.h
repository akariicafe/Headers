@class SBHWidgetSettings, UIViewController, SBHViewControllerTransition, SBHStackConfigurationViewController, SBIconView, NSString, SBHStackConfiguration;
@protocol SBHStackConfigurationInteractionDelegate, SBHStackConfigurationViewControllerAppearanceDelegate, SBIconViewProviding, SBIconListLayoutProvider, SBLeafIconDataSource, SBHWidgetSheetViewControllerPresenter, SBHIconViewConfigurationInteractionDelegate;

@interface SBHStackConfigurationInteraction : NSObject <SBHStackConfigurationViewControllerDelegate, SBHViewControllerTransitionDelegate, SBIconViewObserver, SBHIconViewConfigurationInteraction>

@property (copy, nonatomic) SBHStackConfiguration *configuration;
@property (readonly, nonatomic) SBIconView *iconView;
@property (readonly, nonatomic) id<SBIconViewProviding> iconViewProvider;
@property (readonly, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (readonly, nonatomic) SBHViewControllerTransition *transition;
@property (readonly, nonatomic) SBHWidgetSettings *widgetSettings;
@property (readonly, nonatomic) BOOL showsDoneButton;
@property (readonly, nonatomic) BOOL showsAddButton;
@property (retain, nonatomic) UIViewController *containerViewController;
@property (retain, nonatomic) SBHStackConfigurationViewController *configurationViewController;
@property (readonly, nonatomic) id<SBLeafIconDataSource> configuredDataSource;
@property (weak, nonatomic) id<SBHWidgetSheetViewControllerPresenter> presenter;
@property (weak, nonatomic) id<SBHIconViewConfigurationInteractionDelegate> delegate;
@property (weak, nonatomic) id<SBHStackConfigurationInteractionDelegate> stackConfigurationDelegate;
@property (weak, nonatomic) id<SBHStackConfigurationViewControllerAppearanceDelegate> appearanceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iconViewWasRecycled:(id)a0;
- (void)iconViewWasDiscarded:(id)a0;
- (void)iconViewDidBecomeWindowless:(id)a0;
- (void)iconViewSizeDidChange:(id)a0;
- (void)_folderExpansionAnimationWillBegin:(id)a0;
- (void).cxx_destruct;
- (void)beginConfiguration;
- (void)transitionWillProgressToEndState:(id)a0;
- (void)prepareTransition:(id)a0;
- (void)transitionWillReturnToBeginningState:(id)a0;
- (void)transitionDidProgressToEndState:(id)a0;
- (void)transitionDidReturnToBeginningState:(id)a0;
- (id)animatorForTransition:(id)a0;
- (void)popConfiguration;
- (void)endConfiguration;
- (void)endConfigurationImmediately;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sourceContentFrame;
- (void)_endConfigurationAnimated:(BOOL)a0;
- (id)initWithConfiguration:(id)a0 iconView:(id)a1 iconViewProvider:(id)a2 listLayoutProvider:(id)a3 showsAddButton:(BOOL)a4 showsDoneButton:(BOOL)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentBoundingFrame;
- (void)_handleTransitionWillProgressToEndState:(BOOL)a0;
- (double)_padApertureOutsetFromWidgetWithGridSize:(unsigned long long)a0;
- (void)stackConfigurationViewController:(id)a0 didCommitStackConfiguration:(id)a1;
- (id)stackConfigurationViewController:(id)a0 draggedIconForIdentifier:(id)a1;
- (void)stackConfigurationViewController:(id)a0 isConsumingDropSession:(id)a1;
- (void)stackConfigurationViewController:(id)a0 didRemoveSuggestedWidgetIcon:(id)a1;
- (id)stackConfigurationViewController:(id)a0 promoteSuggestedWidget:(id)a1 withinStack:(id)a2;
- (void)stackConfigurationViewControllerRequestsPresentAddWidgetSheet:(id)a0;
- (void)stackConfigurationViewControllerWillAnimateWidgetInsertion:(id)a0;
- (void)stackConfigurationViewControllerRequestsDismissal:(id)a0;
- (id)stackConfigurationViewController:(id)a0 dragPreviewForIconView:(id)a1;

@end
