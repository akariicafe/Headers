@interface ACSURLSessionDataTask : ACSURLSessionTask

@property (copy) id /* block */ _clientDataCompletionHandler;

- (id)initWithNSURLDataTaskCreator:(id /* block */)a0 initialRequest:(id)a1 forSession:(id)a2;
- (BOOL)_isUpload;
- (void).cxx_destruct;

@end
