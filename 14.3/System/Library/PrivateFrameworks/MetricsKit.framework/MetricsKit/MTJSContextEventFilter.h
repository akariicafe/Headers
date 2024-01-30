@class NSString, JSContext, NSOperationQueue, NSError;

@interface MTJSContextEventFilter : NSObject <MTEventFilter>

@property (retain, nonatomic) NSString *script;
@property (retain, nonatomic) NSString *functionName;
@property (retain, nonatomic) JSContext *jsContext;
@property (retain, nonatomic) NSError *lastError;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)apply:(id)a0;
- (id)initWithJSContext:(id)a0 functionName:(id)a1 operationQueue:(id)a2;
- (void)_applyFilter:(id)a0 promise:(id)a1;
- (id)initWithScript:(id)a0 functionName:(id)a1 operationQueue:(id)a2;

@end
