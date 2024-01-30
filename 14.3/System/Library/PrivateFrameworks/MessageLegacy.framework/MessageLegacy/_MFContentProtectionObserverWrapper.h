@class MFWeakReferenceHolder, NSObject;
@protocol OS_dispatch_queue, MFContentProtectionObserver;

@interface _MFContentProtectionObserverWrapper : NSObject {
    MFWeakReferenceHolder *_observerReference;
}

@property (readonly, nonatomic) id<MFContentProtectionObserver> observer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (id)initWithObserver:(id)a0 queue:(id)a1;

@end
