@class NSString;

@interface SPRSecureChannel : SPRObject

@property (class, readonly, copy, nonatomic) NSString *serverResponseHeader;
@property (class, readonly, copy, nonatomic) NSString *serverResponseBody;

+ (id)secureChannelWithName:(id)a0 error:(id *)a1;

- (id)init;
- (id)initWithName:(id)a0 error:(id *)a1;
- (id)securingRequest:(id)a0 error:(id *)a1;
- (id)startDataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)startDownloadTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)startSessionAsyncWithRequest:(id)a0 configuration:(id)a1 delegate:(id)a2 error:(id *)a3;
- (BOOL)startSessionAsyncWithRequest:(id)a0 delegate:(id)a1 error:(id *)a2;
- (id)startSessionWithRequest:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)startSessionWithRequest:(id)a0 error:(id *)a1;

@end
