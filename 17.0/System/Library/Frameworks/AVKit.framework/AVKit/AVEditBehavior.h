@class NSString, AVEditBehaviorContext;
@protocol AVEditBehaviorDelegate;

@interface AVEditBehavior : NSObject <AVBehaviorInternal, AVBehavior>

@property (weak, nonatomic) AVEditBehaviorContext *behaviorContext;
@property (weak, nonatomic) id<AVEditBehaviorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)behaviorContextClass;

- (void).cxx_destruct;
- (void)didMoveToContext:(id)a0;
- (void)didRemoveFromContext:(id)a0;
- (void)willMoveToContext:(id)a0;
- (void)willRemoveFromContext:(id)a0;

@end
