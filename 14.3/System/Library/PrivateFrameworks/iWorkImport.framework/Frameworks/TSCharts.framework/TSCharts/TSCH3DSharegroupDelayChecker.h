@protocol TSCH3DSharegroupDelayCheckerParent;

@interface TSCH3DSharegroupDelayChecker : NSObject <TSCHUnretainedParent> {
    id<TSCH3DSharegroupDelayCheckerParent> mParent;
}

@property (nonatomic) BOOL condition;

- (void)dealloc;
- (id)initWithParent:(id)a0;
- (void)clearParent;
- (void)p_checkCondition;
- (void)p_scheduleCheckConditionOnMainThread;
- (void)p_cancelCheckCondition;
- (void)scheduleCheckCondition;
- (void)invalidateCondition;

@end
