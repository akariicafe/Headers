@protocol PLActivityCriterionDelegate;

@interface PLActivityCriterion : NSObject

@property (nonatomic) BOOL satisfied;
@property (weak) id<PLActivityCriterionDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)didCompleteActivity:(id)a0;
- (void)didInterruptActivity:(id)a0;
- (void)didDisableActivity:(id)a0;
- (void)didEnableActivity:(id)a0;

@end
