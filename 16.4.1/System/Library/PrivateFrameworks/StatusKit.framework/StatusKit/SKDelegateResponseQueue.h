@class NSObject;
@protocol OS_dispatch_queue;

@interface SKDelegateResponseQueue : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
