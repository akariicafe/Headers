@class NSString, NSDictionary, NSObject, BKSHIDEventSenderDescriptor;
@protocol OS_dispatch_queue, BKIOHIDServiceMatcherDataProviding, BKIOHIDServiceMatchObserver;

@interface BKIOHIDServiceMatcher : NSObject <BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BKSHIDEventSenderDescriptor *_senderDescriptor;
    BOOL _startedMatching;
    BOOL _invalidated;
}

@property (copy, nonatomic) NSDictionary *matchingDictionary;
@property (retain, nonatomic) Class serviceClass;
@property (weak, nonatomic) id<BKIOHIDServiceMatchObserver> observer;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (retain, nonatomic) id<BKIOHIDServiceMatcherDataProviding> dataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSenderDescriptor:(id)a0 dataProvider:(id)a1;
- (void)_servicesAdded:(id)a0;
- (void)_expectDeallocation;
- (void)_lock_servicesAdded:(id)a0;
- (void)startObserving:(id)a0 queue:(id)a1;
- (id)_servicesForIOHIDServiceRefs:(id)a0;
- (void)dealloc;
- (id)initWithMatchingDictionary:(id)a0 dataProvider:(id)a1;
- (id)existingServices;
- (void)invalidate;
- (id)initWithMatchingDictionary:(id)a0 serviceClass:(Class)a1 dataProvider:(id)a2;
- (void).cxx_destruct;
- (id)initWithUsagePage:(int)a0 usage:(int)a1 builtIn:(BOOL)a2 dataProvider:(id)a3;

@end
