@class NSObject;
@protocol LABackoffCounter, OS_dispatch_queue;

@interface MechanismContext : NSObject

@property (retain, nonatomic) id<LABackoffCounter> backoffCounter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
