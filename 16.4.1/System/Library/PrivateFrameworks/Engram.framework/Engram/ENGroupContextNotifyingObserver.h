@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ENGroupContextNotifyingObserver : NSObject <ENGroupContextObserverMiddleware>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ onGroupCreate;
@property (copy, nonatomic) id /* block */ onGroupCache;
@property (copy, nonatomic) id /* block */ onGroupUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)groupContext:(id)a0 didCacheGroup:(id)a1;
- (void)groupContext:(id)a0 didCreateGroup:(id)a1;
- (void)groupContext:(id)a0 didUpdateGroup:(id)a1 withNewGroup:(id)a2;

@end
