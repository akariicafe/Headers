@class NSString, BLSAttribute;
@protocol BLSAssertionServiceResponding, BLSHAssertionAttributeHandlerService;

@interface BLSHInvalidOnSystemSleepAttributeEntry : NSObject <BLSHLocalAssertionAttributeHandlerEntry, SWSystemSleepObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_invalidated;
}

@property (readonly, weak, nonatomic) BLSAttribute *attribute;
@property (readonly, weak, nonatomic) id<BLSAssertionServiceResponding> assertion;
@property (readonly, weak, nonatomic) id<BLSHAssertionAttributeHandlerService> service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateForAttribute:(id)a0 fromAssertion:(id)a1 forService:(id)a2 attributeHandler:(id)a3;

- (void)systemSleepMonitor:(id)a0 prepareForSleepWithCompletion:(id /* block */)a1;
- (BOOL)reactivateIfPossible;
- (id)initForAttribute:(id)a0 fromAssertion:(id)a1 forService:(id)a2;
- (void)invalidate;
- (void).cxx_destruct;
- (void)systemSleepMonitor:(id)a0 sleepRequestedWithResult:(id /* block */)a1;

@end
