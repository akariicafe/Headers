@protocol TSCH3DSharegroupDelayCheckerParent;

@interface TSCH3DSharegroupDelayChecker : NSObject {
    id<TSCH3DSharegroupDelayCheckerParent> _parent;
}

@property (nonatomic) BOOL condition;

- (id)initWithParent:(id)a0;
- (void).cxx_destruct;
- (void)invalidateCondition;
- (void)p_cancelCheckCondition;
- (void)p_checkCondition;
- (void)p_scheduleCheckConditionOnMainThread;
- (void)scheduleCheckCondition;

@end
