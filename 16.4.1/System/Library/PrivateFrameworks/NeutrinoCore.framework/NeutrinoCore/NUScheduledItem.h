@class NSObject;
@protocol OS_dispatch_queue;

@interface NUScheduledItem : NSObject

@property (readonly) unsigned long long scheduledTime;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) id /* block */ block;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (void)dispatch;
- (id)initWithScheduledTime:(unsigned long long)a0 queue:(id)a1 block:(id /* block */)a2;

@end
