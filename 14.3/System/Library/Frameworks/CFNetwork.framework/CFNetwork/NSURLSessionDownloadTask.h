@interface NSURLSessionDownloadTask : NSURLSessionTask

+ (id)new;

- (id)init;
- (void)cancelByProducingResumeData:(id /* block */)a0;

@end
