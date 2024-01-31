@interface NSURLSessionUploadTask : NSURLSessionDataTask

+ (id)new;

- (void)cancelByProducingResumeData:(id /* block */)a0;
- (id)init;

@end
