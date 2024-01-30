@interface _NSKVODeallocSentinel : NSObject {
    id _observedObject;
}

+ (void)_havingRegistrationLockHeldAttachSentinelToObjectIfNeeded:(id)a0;

- (id)_initWithObservedObject:(id)a0;
- (void)dealloc;

@end
