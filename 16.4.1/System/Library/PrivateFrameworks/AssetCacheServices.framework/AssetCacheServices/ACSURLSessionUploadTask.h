@interface ACSURLSessionUploadTask : ACSURLSessionDataTask

- (id)initWithNSURLUploadTaskCreator:(id /* block */)a0 initialRequest:(id)a1 forSession:(id)a2;
- (BOOL)_isUpload;

@end
