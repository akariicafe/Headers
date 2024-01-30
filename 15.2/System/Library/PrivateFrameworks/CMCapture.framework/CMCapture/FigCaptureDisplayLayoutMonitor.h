@class NSArray, NSMutableArray, FBSDisplayLayoutMonitor;

@interface FigCaptureDisplayLayoutMonitor : NSObject {
    struct OpaqueFigSimpleMutex { } *_layoutObserversLock;
    NSMutableArray *_layoutObservers;
    struct OpaqueFigSimpleMutex { } *_appsLock;
    NSMutableArray *_fullScreenApps;
    NSMutableArray *_nonFullScreenApps;
    NSMutableArray *_obscuredApps;
    NSMutableArray *_transitioningApps;
    NSMutableArray *_pipApps;
    NSArray *_elementIdentifiersToIgnore;
    FBSDisplayLayoutMonitor *_layoutMonitor;
}

@property (readonly, nonatomic, getter=isOnHomeScreen) BOOL onHomeScreen;
@property (readonly, nonatomic, getter=isOnLockScreen) BOOL onLockScreen;

+ (void)initialize;
+ (id)sharedDisplayLayoutMonitor;

- (void)removeLayoutObserver:(id)a0;
- (id)initWithFBSDisplayLayoutMonitorCreateFunction:(void /* function */ *)a0;
- (void)addLayoutObserver:(id)a0;
- (void)dealloc;

@end
