@class NSObject;
@protocol OS_dispatch_queue;

@interface IDSDaemonResponseHandler : NSObject

@property (readonly, nonatomic) id block;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithBlock:(id)a0 queue:(id)a1;

@end
