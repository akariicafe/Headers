@class NSConditionLock, NSObject;
@protocol OS_dispatch_queue;

@interface RMStatusPublisherDelegate : NSObject {
    NSConditionLock *_fetchLock;
}

@property (readonly, nonatomic) Class publisherClass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *publisherQueue;

+ (id)sharedDelegateWithPublisherClass:(Class)a0;

- (void).cxx_destruct;
- (void)fetchStatusForStatusKeys:(id)a0 store:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithPublisherClass:(Class)a0;

@end
