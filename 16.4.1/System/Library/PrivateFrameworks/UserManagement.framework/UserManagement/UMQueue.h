@class NSObject;
@protocol OS_dispatch_queue;

@interface UMQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)client;
+ (id)server;
+ (id)userList;

- (void)executeWithSelf:(id)a0 synchronously:(id /* block */)a1;
- (void)_executeWithSelf:(id)a0 block:(id /* block */)a1 synchronously:(BOOL)a2;
- (void)executeWithSelf:(id)a0 asynchronously:(id /* block */)a1;
- (void).cxx_destruct;

@end
