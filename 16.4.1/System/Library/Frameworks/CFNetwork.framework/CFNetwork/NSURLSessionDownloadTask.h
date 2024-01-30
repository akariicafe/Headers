@interface NSURLSessionDownloadTask : NSURLSessionTask

+ (id)new;

- (void)cancelByProducingResumeData:(id /* block */)a0;
- (id)init;

@end
