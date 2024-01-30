@class SBHStackConfiguration, UIViewController, CHSAvocadoDescriptorProvider, NSString, SBIconView, SBHStackConfigurationViewController;
@protocol SBHStackConfigurationViewControllerAppearanceDelegate, SBHIconViewConfigurationInteractionDelegate, SBHStackConfigurationInteractionDelegate;

@interface SBHStackConfigurationInteraction : NSObject <SBHStackConfigurationViewControllerDelegate, UIAdaptivePresentationControllerDelegate, SBHIconViewConfigurationInteraction>

@property (copy, nonatomic) SBHStackConfiguration *configuration;
@property (retain, nonatomic) SBIconView *iconView;
@property (retain, nonatomic) SBHStackConfigurationViewController *configurationViewController;
@property (retain, nonatomic) UIViewController *containerViewController;
@property (retain, nonatomic) CHSAvocadoDescriptorProvider *descriptorProvider;
@property (weak, nonatomic) id<SBHIconViewConfigurationInteractionDelegate> delegate;
@property (weak, nonatomic) id<SBHStackConfigurationInteractionDelegate> stackConfigurationDelegate;
@property (weak, nonatomic) id<SBHStackConfigurationViewControllerAppearanceDelegate> appearanceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)beginConfiguration;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)stackConfigurationViewControllerViewDidDisappear:(id)a0;
- (void)stackConfigurationViewController:(id)a0 didCommitStackConfiguration:(id)a1;
- (id)stackConfigurationViewController:(id)a0 widgetConfigurationInteractionForDataSource:(id)a1;
- (void)stackConfigurationViewControllerWantsToDismiss:(id)a0;
- (void)stackConfigurationViewController:(id)a0 didCommitWidgetConfigurationInteraction:(id)a1;
- (id)initWithConfiguration:(id)a0 iconView:(id)a1 descriptorProvider:(id)a2;
- (void)endConfiguration;
- (void)endConfigurationImmediately;
- (void)endConfigurationAnimated:(BOOL)a0;

@end
