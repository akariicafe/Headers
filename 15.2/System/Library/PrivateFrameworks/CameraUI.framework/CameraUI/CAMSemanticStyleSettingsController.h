@class CAMSemanticStyleSettingsRootController;
@protocol CAMSemanticStyleSettingsControllerDelegate;

@interface CAMSemanticStyleSettingsController : UINavigationController

@property (readonly, nonatomic) CAMSemanticStyleSettingsRootController *_rootController;
@property (weak, nonatomic) id<CAMSemanticStyleSettingsControllerDelegate> controllerDelegate;

- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;

@end
