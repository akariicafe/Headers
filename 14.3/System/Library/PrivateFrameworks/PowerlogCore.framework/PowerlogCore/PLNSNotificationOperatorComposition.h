@class NSArray, NSString, PLOperator, NSOperationQueue, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PLNSNotificationOperatorComposition : NSObject

@property (weak) PLOperator *operator;
@property (retain) NSOperationQueue *operationQueue;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) NSMutableArray *notificationObservers;
@property (retain) NSArray *notificationNames;
@property (readonly) NSString *notificationName;
@property (copy, nonatomic) id /* block */ operatorBlock;

- (void).cxx_destruct;
- (id)initWithOperator:(id)a0 forNotification:(id)a1 withBlock:(id /* block */)a2;
- (void)dealloc;
- (id)initWithWorkQueue:(id)a0 forNotification:(id)a1 withBlock:(id /* block */)a2;
- (id)initWithOperator:(id)a0 forNotifications:(id)a1 withBlock:(id /* block */)a2;
- (void)listenForNotifications:(BOOL)a0;
- (id)initWithWorkQueue:(id)a0 forNotifications:(id)a1 withBlock:(id /* block */)a2;

@end
