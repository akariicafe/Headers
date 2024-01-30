@class SBMousePointerManager, NSString, SBExternalDisplayRuntimeAvailabilitySettings, FBSceneManager, SBExternalDisplayDefaults, SBExternalDisplayService;

@interface SBSystemShellExtendedDisplayControllerPolicyFactory : NSObject <SBSceneHostingDisplayControllerPolicyFactory> {
    SBExternalDisplayService *_externalDisplayService;
    SBExternalDisplayDefaults *_externalDisplayDefaults;
    SBMousePointerManager *_mousePointerManager;
    SBExternalDisplayRuntimeAvailabilitySettings *_runtimeAvailabilitySettings;
    FBSceneManager *_sceneManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
