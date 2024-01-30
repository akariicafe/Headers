@class NSSet, SBDeviceApplicationSceneHandle, NSString, SBHomeGrabberView;
@protocol SBSystemApertureZStackPolicyAssistantDelegate;

@interface SBSystemApertureZStackPolicyAssistant : NSObject <SBDeviceApplicationSceneHandleObserver, SBHomeGrabberViewObserver>

@property (weak, nonatomic) id<SBSystemApertureZStackPolicyAssistantDelegate> delegate;
@property (readonly, weak, nonatomic) SBDeviceApplicationSceneHandle *foregroundExclusiveSceneHandle;
@property (readonly, weak, nonatomic) SBHomeGrabberView *foregroundExclusiveHomeGrabberView;
@property (readonly, nonatomic) BOOL suppressSystemApertureForSystemChromeSuppression;
@property (readonly, copy, nonatomic) NSSet *associatedBundleIdentifiersToSuppressInSystemAperture;
@property (readonly, copy, nonatomic) NSSet *associatedSceneIdentifiersToSuppressInSystemAperture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setForegroundExclusiveSceneHandle:(id)a0 homeGrabberView:(id)a1;
- (void)sceneHandle:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (id)initWithDelegate:(id)a0;
- (void)homeGrabberViewDidUpdateHidden:(id)a0;
- (void)_resolveProposedPolicies;
- (void).cxx_destruct;

@end
