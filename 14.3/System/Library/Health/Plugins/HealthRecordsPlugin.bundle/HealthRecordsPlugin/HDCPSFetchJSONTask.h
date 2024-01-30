@class NSURLSession, NSError, NSURLRequest, NSObject;
@protocol OS_dispatch_group, NSCopying;

@interface HDCPSFetchJSONTask : NSObject {
    BOOL _resumed;
    struct atomic_flag { _Atomic BOOL _Value; } _resumedFlag;
    NSObject<OS_dispatch_group> *_group;
}

@property (readonly, nonatomic) long long maxRetryCount;
@property (readonly, nonatomic) double retryInterval;
@property (readonly, copy, nonatomic) NSURLRequest *request;
@property (readonly, nonatomic) NSURLSession *session;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) id<NSCopying> JSONObject;

- (id)init;
- (void).cxx_destruct;
- (void)waitUntilFinished;
- (void)resume;
- (id)initWithSession:(id)a0 request:(id)a1;
- (id)initWithSession:(id)a0 request:(id)a1 maxRetriesAllowed:(long long)a2 retryInterval:(double)a3;
- (void)_startTaskWithCompletion:(id /* block */)a0;
- (void)_startTaskWithRetryCount:(long long)a0 completion:(id /* block */)a1;
- (id)_errorFromResponse:(id)a0;
- (BOOL)_performRetryIfNeededForStatusCode:(long long)a0 retryCount:(long long)a1 retryHandler:(id /* block */)a2;

@end
