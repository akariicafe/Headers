@class RBSProcessExitEvent, RBSProcessState, RBSProcessHandle;

@interface RBSProcessStateUpdate : NSObject

@property (readonly, nonatomic) RBSProcessHandle *process;
@property (readonly, nonatomic) RBSProcessState *state;
@property (readonly, nonatomic) RBSProcessState *previousState;
@property (readonly, nonatomic) RBSProcessExitEvent *exitEvent;

+ (id)updateWithState:(id)a0 previousState:(id)a1 exitEvent:(id)a2;

- (void).cxx_destruct;
- (id)description;

@end
