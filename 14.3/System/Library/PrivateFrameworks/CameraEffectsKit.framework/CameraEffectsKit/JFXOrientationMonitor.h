@class UIWindow, JFXOrientationState, NSObject, CAMMotionController;
@protocol OS_dispatch_queue;

@interface JFXOrientationMonitor : NSObject

@property (class, readonly, nonatomic) JFXOrientationMonitor *sharedInstance;

@property (retain, nonatomic) UIWindow *window;
@property (nonatomic) long long interfaceOrientation_internal;
@property (retain, nonatomic) CAMMotionController *motionController;
@property (nonatomic) long long deviceOrientation_internal;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic) long long deviceOrientation;
@property (readonly, nonatomic) long long statusBarOrientation;
@property (readonly, nonatomic) JFXOrientationState *currentOrientationState;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (void)initializeWithWindow:(id)a0;
+ (id)JFX_sharedInstanceWithWindow:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithWindow:(id)a0;
- (void)camMotionControllerCaptureOrientationChangedNotification:(id)a0;
- (void)JFX_setInterfaceOrientation:(long long)a0;
- (void)applicationDidChangeStatusBarOrientationNotification:(id)a0;
- (void)JFX_setDeviceOrientation:(long long)a0;

@end
