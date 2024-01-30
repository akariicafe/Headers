@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CATBlockOperationObserver : NSObject <CATOperationObserver> {
    NSObject<OS_dispatch_queue> *mQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (copy, nonatomic) id /* block */ didStart;
@property (copy, nonatomic) id /* block */ didProgress;
@property (copy, nonatomic) id /* block */ didFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)operationDidStart:(id)a0;
- (void)operationDidProgress:(id)a0;
- (void)operationDidFinish:(id)a0;
- (void)invokeBlock:(id /* block */)a0 operation:(id)a1;

@end
