@class NSObject;
@protocol OS_dispatch_queue;

@interface ThroughputAdviserEnvironment : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
