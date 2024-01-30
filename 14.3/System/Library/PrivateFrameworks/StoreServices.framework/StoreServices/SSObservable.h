@class NSString, NSConditionLock, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SSObservable : NSObject

@property (retain, nonatomic) NSError *failureError;
@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) NSMutableArray *observers;
@property (retain, nonatomic) NSMutableArray *queuedResults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sendMessageQueue;
@property (retain, nonatomic) NSConditionLock *stateLock;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;

+ (id)observableWithObserver:(id)a0;
+ (id)observableWithObservers:(id)a0;
+ (BOOL)_errorIsCanceledError:(id)a0;

- (BOOL)cancel;
- (void)subscribe:(id)a0;
- (id)init;
- (BOOL)_isComplete;
- (void).cxx_destruct;
- (BOOL)sendResult:(id)a0;
- (BOOL)sendCompletion;
- (BOOL)sendFailure:(id)a0;

@end
