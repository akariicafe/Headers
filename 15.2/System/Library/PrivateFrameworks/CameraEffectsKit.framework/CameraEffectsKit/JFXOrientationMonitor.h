@class UIWindow, NSObject;
@protocol OS_dispatch_queue;

@interface JFXOrientationMonitor : NSObject

@property (class, readonly, nonatomic) BOOL initialized;
@property (class, readonly, nonatomic) UIWindow *window;
@property (class, readonly, nonatomic) long long deviceOrientation;
@property (class, readonly, nonatomic) long long deviceInterfaceOrientation;
@property (class, readonly, nonatomic) long long interfaceOrientation;

@property (readonly, nonatomic) UIWindow *window;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *darwinNotificationQ;
@property (nonatomic) int darwinNotificationToken;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic) long long deviceOrientation_lock;
@property (nonatomic) long long deviceInterfaceOrientation;
@property (nonatomic) long long deviceInterfaceOrientation_lock;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long interfaceOrientation_lock;

+ (void)initializeWithViewController:(id)a0;
+ (void)initializeWithWindow:(id)a0;
+ (void)JFX_initLock;

- (id)initWithWindow:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)JFX_initDarwinNotification;
- (void)JFX_UIApplicationDidChangeStatusBarOrientationNotification:(id)a0;
- (long long)JFX_deviceOrientation_darwinNotificationQ;
- (void)JFX_UIApplicationDidEnterBackgroundNotification:(id)a0;
- (void)JFX_UIApplicationWillEnterForegroundNotification:(id)a0;

@end
