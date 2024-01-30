@class SAUIDelayedActionCommand;
@protocol SVXTaskTracking;

@interface SVXServiceCommandDelayedAction : NSObject

@property (readonly, copy, nonatomic) SAUIDelayedActionCommand *command;
@property (readonly, nonatomic) id<SVXTaskTracking> taskTracker;

- (void).cxx_destruct;
- (id)initWithCommand:(id)a0 taskTracker:(id)a1;

@end
