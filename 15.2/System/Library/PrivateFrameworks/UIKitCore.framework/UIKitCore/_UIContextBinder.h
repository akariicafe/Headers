@class NSArray, NSPointerArray, NSMutableOrderedSet;
@protocol _UIContextBinderContextCreationPolicyHolding, _UIContextBinding;

@interface _UIContextBinder : NSObject {
    NSPointerArray *_enrolledBindables;
    NSPointerArray *_attachedBindables;
    NSMutableOrderedSet *_contexts;
}

@property (readonly, nonatomic) id<_UIContextBinding> substrate;
@property (nonatomic) long long contextManagementPolicy;
@property (weak, nonatomic) id<_UIContextBinderContextCreationPolicyHolding> contextCreationPolicyHolder;
@property (readonly, nonatomic) NSArray *enrolledBindables;
@property (readonly, nonatomic) NSArray *attachedBindables;

+ (id)createContextForBindable:(id)a0 withSubstrate:(id)a1;

- (BOOL)bindableIsTopmostAttached:(id)a0;
- (id)_enrolledBindablePointersAsCopy:(BOOL)a0;
- (id)initWithSubstrate:(id)a0;
- (void)createContextsWithTest:(id /* block */)a0 creationAction:(id /* block */)a1;
- (void)updateBindable:(id)a0;
- (void)updateBindableOrderWithTest:(id /* block */)a0;
- (void)updateBindableOrderWithTest:(id /* block */)a0 force:(BOOL)a1;
- (void)enrollBindable:(id)a0;
- (id)_attachedBindablePointersAsCopy:(BOOL)a0;
- (void)detachBindable:(id)a0;
- (void).cxx_destruct;
- (void)attachBindable:(id)a0;
- (void)purgeContextsWithPurgeAction:(id /* block */)a0 afterPurgeAction:(id /* block */)a1;
- (void)expellBindable:(id)a0;
- (void)recreateContextForBindable:(id)a0;
- (BOOL)bindableEnrolled:(id)a0;
- (void)purgeContextsWithPurgeAction:(id /* block */)a0;
- (BOOL)permitContextCreationForBindable:(id)a0;
- (id)_contextForBindable:(id)a0;

@end
