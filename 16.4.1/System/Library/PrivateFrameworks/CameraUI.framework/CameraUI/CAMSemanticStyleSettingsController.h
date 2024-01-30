@class CAMSemanticStyleSettingsRootController;
@protocol CAMSemanticStyleSettingsControllerDelegate;

@interface CAMSemanticStyleSettingsController : UINavigationController

@property (readonly, nonatomic) CAMSemanticStyleSettingsRootController *_rootController;
@property (weak, nonatomic) id<CAMSemanticStyleSettingsControllerDelegate> controllerDelegate;

- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)_canShowWhileLocked;
- (id)init;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;

@end
