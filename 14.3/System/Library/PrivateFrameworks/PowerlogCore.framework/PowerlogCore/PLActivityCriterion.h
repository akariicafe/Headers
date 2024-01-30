@protocol PLActivityCriterionDelegate;

@interface PLActivityCriterion : NSObject

@property (nonatomic) BOOL satisfied;
@property (weak) id<PLActivityCriterionDelegate> delegate;

- (void)didInterruptActivity:(id)a0;
- (void)didCompleteActivity:(id)a0;
- (void)didDisableActivity:(id)a0;
- (id)init;
- (void)didEnableActivity:(id)a0;
- (void).cxx_destruct;

@end
