@class FBSDisplayLayoutMonitor, NSMutableArray;

@interface FigCaptureDisplayLayoutMonitor : NSObject {
    struct OpaqueFigSimpleMutex { } *_layoutObserversLock;
    NSMutableArray *_layoutObservers;
    struct OpaqueFigSimpleMutex { } *_appsLock;
    NSMutableArray *_fullScreenApps;
    NSMutableArray *_nonFullScreenApps;
    NSMutableArray *_obscuredApps;
    NSMutableArray *_transitioningApps;
    NSMutableArray *_pipApps;
    FBSDisplayLayoutMonitor *_layoutMonitor;
}

@property (readonly, nonatomic, getter=isOnHomeScreen) BOOL onHomeScreen;
@property (readonly, nonatomic, getter=isOnLockScreen) BOOL onLockScreen;

+ (void)initialize;
+ (id)sharedDisplayLayoutMonitor;

- (void)addLayoutObserver:(id)a0;
- (void)_updateCurrentLayout:(id)a0;
- (void)dealloc;
- (void)removeLayoutObserver:(id)a0;
- (void)_updateObserversWithForegroundApps:(id)a0 obscuredApps:(id)a1 transitioningApps:(id)a2 pipApps:(id)a3;
- (id)initWithFBSDisplayLayoutMonitorCreateFunction:(void /* function */ *)a0;

@end
