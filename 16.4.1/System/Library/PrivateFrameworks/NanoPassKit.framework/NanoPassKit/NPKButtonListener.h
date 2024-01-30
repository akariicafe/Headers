@class NSObject;
@protocol OS_dispatch_queue;

@interface NPKButtonListener : NSObject

@property (copy, nonatomic) id /* block */ buttonHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;

- (void).cxx_destruct;
- (id)initWithHandlerQueue:(id)a0;
- (id /* block */)_handlerQueue_buttonHandler;

@end
