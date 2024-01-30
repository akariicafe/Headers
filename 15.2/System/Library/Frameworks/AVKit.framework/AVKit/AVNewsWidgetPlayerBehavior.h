@class AVNewsWidgetPlayerBehaviorContext, NSString;

@interface AVNewsWidgetPlayerBehavior : NSObject <AVBehaviorInternal, AVBehavior>

@property (weak, nonatomic) AVNewsWidgetPlayerBehaviorContext *behaviorContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)behaviorContextClass;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)willMoveToContext:(id)a0;
- (void)didMoveToContext:(id)a0;
- (void)willRemoveFromContext:(id)a0;
- (void)didRemoveFromContext:(id)a0;
- (id)playerForContentTransitionType:(long long)a0;
- (void)willBeginContentTransition;
- (void)didUpdateContentTransitionProgress:(double)a0;
- (void)willCompleteContentTransition;
- (void)didCompleteContentTransition;
- (void)willCancelContentTransition;
- (void)didCancelContentTransition;

@end
