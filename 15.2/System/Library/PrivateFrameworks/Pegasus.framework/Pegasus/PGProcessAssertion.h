@class NSString, NSError, NSObject, RBSAssertion;
@protocol OS_dispatch_queue;

@interface PGProcessAssertion : NSObject {
    BOOL _lock_invalidated;
    NSString *_explanation;
    RBSAssertion *_assertion;
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_error;
    BOOL _acquired;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)transientTaskDomainAttribute;
+ (id)assertionWithDomainAttribute:(id)a0 forProcessWithIdentifier:(int)a1 explanation:(id)a2;
+ (id)pipVisibleDomainAttribute;
+ (id)transientTaskAssertionForProcessWithIdentifier:(int)a0 explanation:(id)a1;
+ (id)pipVisibleAssertionForProcessWithIdentifier:(int)a0 explanation:(id)a1;

- (BOOL)_isInvalidated;
- (id)initWithExplanation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (void)acquireWithTarget:(id)a0 domainAttribute:(id)a1;
- (void)_setInvalidated:(BOOL)a0;

@end
