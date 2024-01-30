@class NSObject;
@protocol OS_dispatch_queue;

@interface WSWorkloop : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedFrameworkWorkloop;

+ (id)createWorkloopWithLabel:(id)a0;

@end
