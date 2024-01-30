@class NSObject;
@protocol OS_dispatch_queue;

@interface _MRTelevisionControllerBlockCallback : NSObject

@property (readonly, nonatomic) id /* block */ callbackBlock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithCallbackBlock:(id /* block */)a0 queue:(id)a1;

@end
