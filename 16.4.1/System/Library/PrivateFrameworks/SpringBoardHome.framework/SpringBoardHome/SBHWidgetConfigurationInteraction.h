@class UIView, WFWidgetConfigurationViewController, MTMaterialView, UITapGestureRecognizer, SBHViewControllerTransition, CHSWidgetDescriptor, NSString, SBHWidgetSettings, INIntent, UIViewController, SBIconView, WFWidgetConfigurationOptions;
@protocol SBLeafIconDataSource, SBHIconViewConfigurationInteractionDelegate;

@interface SBHWidgetConfigurationInteraction : NSObject <SBHViewControllerTransitionDelegate, SBHWidgetConfigurationAnimationContext, WFWidgetConfigurationViewControllerDelegate, SBHIconViewConfigurationInteraction>

@property (readonly, nonatomic) SBHWidgetSettings *widgetSettings;
@property (copy, nonatomic) INIntent *configuration;
@property (readonly, nonatomic) WFWidgetConfigurationOptions *configurationOptions;
@property (retain, nonatomic) WFWidgetConfigurationViewController *configurationViewController;
@property (retain, nonatomic) UIViewController *containerViewController;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceContentFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetContentFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentBoundingRect;
@property (retain, nonatomic) UIView *homeScreenContentView;
@property (retain, nonatomic) SBIconView *sourceView;
@property (retain, nonatomic) SBIconView *referenceView;
@property (retain, nonatomic) MTMaterialView *backgroundView;
@property (retain, nonatomic) UIView *backgroundTintView;
@property (retain, nonatomic) UIView *touchBlockingView;
@property (retain, nonatomic) UITapGestureRecognizer *tapToPresentGesture;
@property (retain, nonatomic) SBHViewControllerTransition *transition;
@property (readonly, copy, nonatomic) CHSWidgetDescriptor *widgetDescriptor;
@property (weak, nonatomic) id<SBHIconViewConfigurationInteractionDelegate> delegate;
@property (readonly, nonatomic) id<SBLeafIconDataSource> configuredDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UIView *targetView;

- (void)beginConfiguration;
- (void).cxx_destruct;
- (void)widgetConfigurationViewController:(id)a0 didFinishWithIntent:(id)a1;
- (void)_endConfigurationImmediately:(BOOL)a0;
- (void)_handleTapToDismiss:(id)a0;
- (void)_handleTapToPresent:(id)a0;
- (void)_setUpMatchMoveAnimationForBackgroundView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sourceContentFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_targetContentFrame;
- (id)animatorForTransition:(id)a0;
- (void)endConfiguration;
- (void)endConfigurationImmediately;
- (id)initWithWidgetDescriptor:(id)a0 gridSizeClass:(unsigned long long)a1 intent:(id)a2 configuredDataSource:(id)a3;
- (void)popConfiguration;
- (void)prepareTransition:(id)a0;
- (void)transitionDidProgressToEndState:(id)a0;
- (void)transitionDidReturnToBeginningState:(id)a0;
- (void)transitionWillProgressToEndState:(id)a0;
- (void)transitionWillReturnToBeginningState:(id)a0;
- (void)widgetConfigurationViewControllerPreferredCardSizeDidChange:(id)a0;

@end
