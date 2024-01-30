@class NSString, BLSDurationAttribute;
@protocol BLSAssertionServiceResponding, BLSHAssertionAttributeHandlerService, BSInvalidatable;

@interface BLSHAssertionAttributeTimer : NSObject <BLSHLocalAssertionAttributeHandlerEntry, BSInvalidatable, BSCancellable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<BSInvalidatable> _timer;
    BOOL _invalidated;
}

@property (readonly, weak, nonatomic) BLSDurationAttribute *attribute;
@property (readonly, weak, nonatomic) id<BLSAssertionServiceResponding> assertion;
@property (readonly, weak, nonatomic) id<BLSHAssertionAttributeHandlerService> service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateForAttribute:(id)a0 fromAssertion:(id)a1 forService:(id)a2 attributeHandler:(id)a3;

- (void)timerFired;
- (BOOL)reactivateIfPossible;
- (void)cancel;
- (id)initForAttribute:(id)a0 fromAssertion:(id)a1 forService:(id)a2;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;

@end
