@class NSObject;
@protocol OS_dispatch_queue;

@interface SBSStatusBarStyleOverridesAssertionAcquisitionHandlerEntry : NSObject

@property (readonly, copy, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)init;
- (id)initWithHandler:(id /* block */)a0 queue:(id)a1;

@end
