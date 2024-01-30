@class AFSiriTaskService, NSString, NSObject;
@protocol OS_dispatch_queue, AFSiriTaskServiceDelegate;

@interface AFSiriTaskDeliveryHandler : NSObject <AFSiriTaskDelivering>

@property (weak, nonatomic) AFSiriTaskService *service;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<AFSiriTaskServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)deliverSiriTask:(id)a0 completionHandler:(id /* block */)a1;

@end
