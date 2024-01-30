@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SSDistributedNotificationCenterObserver : NSObject

@property (readonly, nonatomic) id /* block */ block;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSString *name;

- (id)initWithName:(id)a0 queue:(id)a1 block:(id /* block */)a2;
- (void)dealloc;

@end
