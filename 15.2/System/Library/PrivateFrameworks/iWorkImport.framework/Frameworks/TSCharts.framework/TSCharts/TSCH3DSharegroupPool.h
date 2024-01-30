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

- (void)applicationWillEnterForeground;
- (void)flush;
- (void)disable;
- (void)enable;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
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
