@class NSString, NSURL;

@interface QLGeneratorFetcher : QLItemFetcher

@property (retain) NSString *contentType;
@property BOOL fetchCompleted;
@property (copy) NSURL *url;

- (void).cxx_destruct;
- (void)_callCompletionBlockIfNecessary:(id /* block */)a0 withReply:(id)a1 error:(id)a2;
- (void)fetchContentWithAllowedOutputClasses:(id)a0 inQueue:(id)a1 updateBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (id)initWithURL:(id)a0 contentType:(id)a1;

@end
