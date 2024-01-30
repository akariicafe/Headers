@class NSError, NSURL;

@interface VSFileRemoveOperation : VSAsyncOperation

@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSURL *fileURL;

- (void).cxx_destruct;
- (void)executionDidBegin;

@end
