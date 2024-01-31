@class NSString, AVAppStoreBehaviorContext;

@interface AVAppStoreBehavior : NSObject <AVBehaviorInternal, AVBehavior>

@property (weak, nonatomic) AVAppStoreBehaviorContext *behaviorContext;
@property (readonly, nonatomic) BOOL prefersFirstGenerationControlsWhenEmbeddedInline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)behaviorContextClass;
+ (id)behaviorWithFirstGenerationEmbeddedPlayer;

- (void).cxx_destruct;
- (void)didMoveToContext:(id)a0;
- (void)didRemoveFromContext:(id)a0;
- (void)willMoveToContext:(id)a0;
- (void)willRemoveFromContext:(id)a0;

@end
