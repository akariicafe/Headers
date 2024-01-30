@class NSObject;
@protocol OS_dispatch_queue;

@interface CKVServiceConnection : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;

- (void).cxx_destruct;
- (id)init;
- (id)initWithServiceQueue:(id)a0;

@end
