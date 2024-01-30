@class SBApplicationSceneEntity, SBPIPControllerCoordinator, NSString, SBPIPController;

@interface SBAutoPIPWorkspaceTransaction : SBWorkspaceTransaction {
    int _pidToPIP;
    long long _inferredTransitionStyle;
    SBPIPControllerCoordinator *_pipCoordinator;
    SBPIPController *_pipController;
    NSString *_reason;
    BOOL _startPictureInPictureDidComplete;
}

@property (readonly, copy, nonatomic) SBApplicationSceneEntity *entityToPIP;
@property (nonatomic) long long transitionStyle;

+ (BOOL)shouldAutoPIPEnteringBackgroundForRequest:(id)a0 foundEntity:(id *)a1 tetheringMode:(long long *)a2 transitionStyle:(long long *)a3 reason:(long long)a4;
+ (BOOL)shouldAutoPIPEnteringBackgroundForRequest:(id)a0 tetheringMode:(long long *)a1 reason:(long long)a2;
+ (BOOL)shouldAutoPIPEnteringBackgroundForRequest:(id)a0 foundEntity:(id *)a1 transitionStyle:(long long *)a2;
+ (BOOL)shouldAutoPIPEnteringBackgroundForRequest:(id)a0;
+ (BOOL)shouldAutoPIPEnteringBackgroundForRequest:(id)a0 transitionStyle:(long long *)a1;
+ (BOOL)shouldAutoPIPEnteringBackgroundForRequest:(id)a0 reason:(long long)a1;
+ (BOOL)shouldAutoPIPEnteringBackgroundForRequest:(id)a0 foundEntity:(id *)a1;

- (BOOL)_canBeInterrupted;
- (id)initWithTransitionRequest:(id)a0;
- (void)_begin;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void).cxx_destruct;
- (id)initWithTransitionRequest:(id)a0 includeActiveAppEntity:(BOOL)a1 reason:(long long)a2;

@end
