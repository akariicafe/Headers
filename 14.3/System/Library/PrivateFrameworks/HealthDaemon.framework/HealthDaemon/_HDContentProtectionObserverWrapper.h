@class NSObject;
@protocol HDContentProtectionObserver, OS_dispatch_queue;

@interface _HDContentProtectionObserverWrapper : NSObject

@property (readonly, weak, nonatomic) id<HDContentProtectionObserver> observer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (id)initWithObserver:(id)a0 queue:(id)a1;

@end
