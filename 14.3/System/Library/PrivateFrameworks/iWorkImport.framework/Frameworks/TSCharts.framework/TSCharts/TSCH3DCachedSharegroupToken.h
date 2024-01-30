@class TSCH3DSharegroupDelayChecker, TSCH3DGPUSharegroup;

@interface TSCH3DCachedSharegroupToken : TSCH3DSharegroupToken <TSCH3DSharegroupDelayCheckerParent> {
    TSCH3DSharegroupDelayChecker *mChecker;
    TSCH3DGPUSharegroup *mSharegroup;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)willCheckCondition;
- (void)releaseSharegroup:(id)a0;
- (void)flushTokenSharegroup;
- (id)tokenSharegroup;
- (void)deleteTokenSharegroup;
- (void)didRemoveAllInterests;

@end
