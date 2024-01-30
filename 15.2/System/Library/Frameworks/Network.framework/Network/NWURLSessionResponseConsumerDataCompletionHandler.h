@class NWURLSessionDelegateWrapper, NSString, NWURLSessionDataTask, NSURLResponse, NSObject;
@protocol OS_dispatch_data;

@interface NWURLSessionResponseConsumerDataCompletionHandler : NSObject <NWURLSessionResponseConsumer> {
    NWURLSessionDataTask *_task;
    NWURLSessionDelegateWrapper *_delegateWrapper;
    id /* block */ _completionHandler;
    NSURLResponse *_currentResponse;
    NSObject<OS_dispatch_data> *_data;
}

@property (readonly) NSURLResponse *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)deliverResponse:(id)a0 completionHandler:(id /* block */)a1;
- (void)deliverData:(id)a0 complete:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
