@class NSObject;
@protocol OS_dispatch_queue;

@interface AFKeyValueObservingDeliveryOptions : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) unsigned int qosClass;
@property (readonly, nonatomic) BOOL asynchronous;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 qosClass:(unsigned int)a1 asynchronous:(BOOL)a2;

@end
