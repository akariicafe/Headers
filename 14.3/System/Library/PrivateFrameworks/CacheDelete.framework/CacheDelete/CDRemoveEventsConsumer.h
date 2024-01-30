@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CDRemoveEventsConsumer : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ consumer;
@property struct __FSEventStream { } *stream;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *consumer_q;
@property (retain, nonatomic) NSString *volume;
@property BOOL historyDone;
@property struct fsid { int val[2]; } fsid;
@property unsigned long long since;

- (void)callback:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConsumer:(id /* block */)a0 identifier:(id)a1;
- (void)consumeStream:(struct __FSEventStream { } *)a0 forVolume:(id)a1;

@end
