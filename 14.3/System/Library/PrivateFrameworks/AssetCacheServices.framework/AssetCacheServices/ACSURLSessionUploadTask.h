@interface ACSURLSessionUploadTask : ACSURLSessionDataTask

- (BOOL)_isUpload;
- (id)initWithNSURLUploadTaskCreator:(id /* block */)a0 initialRequest:(id)a1 forSession:(id)a2;

@end
