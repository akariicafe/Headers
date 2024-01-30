@class NSString, NSCondition, TSCH3DSharegroupDelayChecker, NSMutableArray;

@interface TSCH3DSharegroupPool : NSObject <TSCH3DSharegroupDelayCheckerParent, TSUiOSMemoryWarningFlushable> {
    long long mSize;
    long long mNumAlive;
    long long mDisableLevel;
    NSMutableArray *mSharegroups;
    NSCondition *mCondition;
    BOOL mBusy;
    TSCH3DSharegroupDelayChecker *mChecker;
    unsigned long long mApplicationState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (id)_singletonAlloc;

- (void)enable;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)disable;
- (void)flush;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)applicationWillEnterForeground;
- (void)willCheckCondition;
- (void)scheduleCheckCondition;
- (void)p_conditionLockedWaitForBackgroundThreadsWithTimeout:(double)a0;
- (void)p_removeSharegroupsFromFlushingManager;
- (void)p_lockAndPerformBlock:(id /* block */)a0;
- (BOOL)p_applicationStateAllowsObjectFlushing;
- (void)p_flushSharegroupsIfPossible;
- (BOOL)p_applicationStateAllowsOpenGLObjectCreation;
- (id)p_obtainSharegroupFromSharegroups;
- (BOOL)p_applicationStateAllowsAnimationRendering;
- (BOOL)p_canUseOpenGLWithCheck:(id /* block */)a0;
- (BOOL)p_applicationStateAllowsOpenGLRendering;
- (id)obtainSharegroup;
- (void)releaseSharegroup:(id)a0;
- (BOOL)canRenderForAnimations;
- (BOOL)canCreateOpenGLObjects;
- (BOOL)canRenderUsingOpenGL;
- (BOOL)canFlushObjects;
- (void)waitForBackgroundThreadsWithTimeout:(double)a0;

@end
