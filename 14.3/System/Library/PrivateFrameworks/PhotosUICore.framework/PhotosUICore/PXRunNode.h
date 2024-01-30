@class NSSet, NSArray, NSString, PXRunNodeOperation, NSLock;
@protocol PXRunNodeDelegate;

@interface PXRunNode : NSObject <PXRunNode> {
    PXRunNodeOperation *_operation;
}

@property (readonly, nonatomic) NSSet *_dependencySet;
@property (readonly, nonatomic) NSLock *_operationLock;
@property (readonly) unsigned long long state;
@property (readonly, getter=isWaiting) BOOL waiting;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly, getter=isComplete) BOOL complete;
@property (readonly, getter=isCanceled) BOOL canceled;
@property (weak, nonatomic) id<PXRunNodeDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *dependencies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)processGraphForRunNode:(id)a0 withQualityOfService:(long long)a1;
+ (id)_defaultNodeRunnerWithQualityOfService:(long long)a0;
+ (void)processGraphForRunNode:(id)a0;

- (void)cancel;
- (void)run;
- (id)init;
- (void)didCancel;
- (void).cxx_destruct;
- (void)complete;
- (id)newOperation;
- (void)_performChangesToOperation:(id /* block */)a0;
- (void)cancelWithError:(id)a0;
- (id)initWithDependencies:(id)a0;
- (void)completeWithError:(id)a0;

@end
