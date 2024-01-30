@class NSString, NSCondition, TSCH3DSharegroupDelayChecker, NSMutableArray;

@interface TSCH3DSharegroupPool : NSObject <TSCH3DSharegroupDelayCheckerParent, TSUiOSMemoryWarningFlushable> {
    long long _size;
    long long _numAlive;
    long long _disableLevel;
    NSMutableArray *_sharegroups;
    NSCondition *_condition;
    BOOL _busy;
    TSCH3DSharegroupDelayChecker *_checker;
    unsigned long long _applicationState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;

- (void)enable;
- (void)applicationWillEnterForeground;
- (void)disable;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)flush;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)canFlushObjects;
- (BOOL)canCreateOpenGLObjects;
- (BOOL)canRenderForAnimations;
- (BOOL)canRenderUsingOpenGL;
- (id)obtainSharegroup;
- (BOOL)p_applicationStateAllowsAnimationRendering;
- (BOOL)p_applicationStateAllowsObjectFlushing;
- (BOOL)p_applicationStateAllowsOpenGLObjectCreation;
- (BOOL)p_applicationStateAllowsOpenGLRendering;
- (BOOL)p_canUseOpenGLWithCheck:(id /* block */)a0;
- (void)p_conditionLockedWaitForBackgroundThreadsWithTimeout:(double)a0;
- (void)p_flushSharegroupsIfPossible;
- (void)p_lockAndPerformBlock:(id /* block */)a0;
- (id)p_obtainSharegroupFromSharegroups;
- (void)p_removeSharegroupsFromFlushingManager;
- (void)releaseSharegroup:(id)a0;
- (void)scheduleCheckCondition;
- (void)waitForBackgroundThreadsWithTimeout:(double)a0;
- (void)willCheckCondition;

@end
