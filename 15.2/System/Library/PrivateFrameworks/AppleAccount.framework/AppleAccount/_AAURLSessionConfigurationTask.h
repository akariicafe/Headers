@class NSURLRequest, AAURLSession, NSString;
@protocol AAURLSessionTaskProtocol;

@interface _AAURLSessionConfigurationTask : NSObject <AAURLSessionTaskProtocol> {
    id /* block */ _completion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    struct { unsigned char isCanceled : 1; unsigned char isFetchingConfiguration : 1; } _flags;
    id<AAURLSessionTaskProtocol> _configurationTask;
    id<AAURLSessionTaskProtocol> _sessionTask;
}

@property (readonly, nonatomic) AAURLSession *session;
@property (readonly, nonatomic) NSURLRequest *originalRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invokeCompletionWithData:(id)a0 response:(id)a1 error:(id)a2;
- (void)_initiateSessionTaskWithConfiguration:(id)a0;
- (void)_unfairLock_initiateConfigurationTask;
- (id)initWithSession:(id)a0 request:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)suspend;
- (void)resume;
- (void)cancel;

@end
