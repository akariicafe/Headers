@class AVNewsWidgetPlayerBehaviorContext, NSString;

@interface AVNewsWidgetPlayerBehavior : NSObject <AVBehaviorInternal, AVBehavior>

@property (weak, nonatomic) AVNewsWidgetPlayerBehaviorContext *behaviorContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)behaviorContextClass;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)playerForContentTransitionType:(long long)a0;
- (void)didCancelContentTransition;
- (void)didCompleteContentTransition;
- (void)didMoveToContext:(id)a0;
- (void)didRemoveFromContext:(id)a0;
- (void)didUpdateContentTransitionProgress:(double)a0;
- (void)willBeginContentTransition;
- (void)willCancelContentTransition;
- (void)willCompleteContentTransition;
- (void)willMoveToContext:(id)a0;
- (void)willRemoveFromContext:(id)a0;

@end
