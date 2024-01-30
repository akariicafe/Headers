@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _CATOperationTargetSelectorObserver : NSObject <CATOperationObserver>

@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) unsigned long long events;
@property (readonly, nonatomic) id userInfo;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTarget:(id)a0 selector:(SEL)a1 events:(unsigned long long)a2 userInfo:(id)a3 delegateQueue:(id)a4;
- (id)init;
- (void).cxx_destruct;
- (void)operationDidStart:(id)a0;
- (void)invokeActionWithOperation:(id)a0;
- (void)operationDidProgress:(id)a0;
- (void)operationDidFinish:(id)a0;

@end
