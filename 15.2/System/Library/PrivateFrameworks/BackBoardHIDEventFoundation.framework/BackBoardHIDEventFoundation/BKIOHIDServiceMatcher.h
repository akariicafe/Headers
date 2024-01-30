@class NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, BKIOHIDServiceMatcherDataProviding, BKIOHIDServiceMatchObserver;

@interface BKIOHIDServiceMatcher : NSObject <BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
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

- (id)existingServices;
- (void)_servicesAdded:(id)a0;
- (void)_expectDeallocation;
- (id)initWithMatchingDictionary:(id)a0 serviceClass:(Class)a1 dataProvider:(id)a2;
- (void)_lock_servicesAdded:(id)a0;
- (id)_servicesForIOHIDServiceRefs:(id)a0;
- (void).cxx_destruct;
- (void)startObserving:(id)a0 queue:(id)a1;
- (void)invalidate;
- (id)initWithUsagePage:(int)a0 usage:(int)a1 builtIn:(BOOL)a2 dataProvider:(id)a3;
- (id)initWithMatchingDictionary:(id)a0 dataProvider:(id)a1;
- (void)dealloc;

@end
