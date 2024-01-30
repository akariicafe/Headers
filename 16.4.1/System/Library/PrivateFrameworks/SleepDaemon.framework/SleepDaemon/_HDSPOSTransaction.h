@class NSString, NSObject;
@protocol OS_os_transaction, OS_dispatch_source;

@interface _HDSPOSTransaction : NSObject <BSDescriptionProviding, HDSPAssertion>

@property (readonly, nonatomic) unsigned long long signpost_id;
@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } transactionLock;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)assertionWithIdentifier:(id)a0;
+ (id)assertionWithIdentifier:(id)a0 timeout:(double)a1;

- (void)_locked_release;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_withLock:(id /* block */)a0;
- (void)dealloc;
- (void)releaseAssertion;
- (id)initWithIdentifier:(id)a0 timeout:(double)a1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
