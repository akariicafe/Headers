@class NSString, BKIOHIDServiceMatcher, BKSHIDEventSenderDescriptor, BKIOHIDServicePersistentPropertyController;

@interface BKIOHIDServiceSimplePersistentPropertySupport : NSObject <BKIOHIDServiceMatchObserver, BKIOHIDServicePersistentPropertyHandling, BSInvalidatable> {
    BKIOHIDServiceMatcher *_matcher;
    BKIOHIDServicePersistentPropertyController *_persistentPropertyController;
    BKSHIDEventSenderDescriptor *_senderDescriptor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithSenderDescriptor:(id)a0 matcherDataProvider:(id)a1 persistentPropertyController:(id)a2;
- (void)matcher:(id)a0 servicesDidMatch:(id)a1;
- (long long)setPersistentProperties:(id)a0 forServicesMatchingDescriptor:(id)a1;

@end
