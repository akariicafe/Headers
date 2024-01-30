@class AVSeymourBehaviorContext, NSString;

@interface AVSeymourBehavior : NSObject <AVBehaviorInternal, AVBehavior>

@property (weak, nonatomic) AVSeymourBehaviorContext *behaviorContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)behaviorContextClass;

- (void).cxx_destruct;
- (void)didMoveToContext:(id)a0;
- (void)didRemoveFromContext:(id)a0;
- (void)seymourBehaviorContext:(id)a0 didRecieveDoneButtonTapWithDismissalBlock:(id /* block */)a1;
- (void)willMoveToContext:(id)a0;
- (void)willRemoveFromContext:(id)a0;

@end
