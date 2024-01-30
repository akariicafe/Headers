@interface _NSKVODeallocSentinel : NSObject {
    id _observedObject;
}

+ (void)_havingRegistrationLockHeldAttachSentinelToObjectIfNeeded:(id)a0;

- (void)dealloc;
- (id)_initWithObservedObject:(id)a0;

@end
