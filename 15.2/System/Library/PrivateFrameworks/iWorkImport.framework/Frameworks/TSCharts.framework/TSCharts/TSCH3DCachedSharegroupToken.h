@class TSCH3DSharegroupDelayChecker, TSCH3DGPUSharegroup;

@interface TSCH3DCachedSharegroupToken : TSCH3DSharegroupToken <TSCH3DSharegroupDelayCheckerParent> {
    TSCH3DSharegroupDelayChecker *_checker;
    TSCH3DGPUSharegroup *_sharegroup;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)willCheckCondition;
- (void)releaseSharegroup:(id)a0;
- (void)flushTokenSharegroup;
- (id)tokenSharegroup;
- (void)deleteTokenSharegroup;
- (void)didRemoveAllInterests;

@end
