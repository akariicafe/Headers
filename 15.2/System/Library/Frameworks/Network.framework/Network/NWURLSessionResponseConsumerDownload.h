@class NWURLSessionDelegateWrapper, NSString, NWURLSessionDownloadTask, NSURLResponse;

@interface NWURLSessionResponseConsumerDownload : NSObject <NWURLSessionResponseConsumer> {
    NWURLSessionDownloadTask *_task;
    NWURLSessionDelegateWrapper *_delegateWrapper;
    id /* block */ _completionHandler;
    NSURLResponse *_currentResponse;
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
