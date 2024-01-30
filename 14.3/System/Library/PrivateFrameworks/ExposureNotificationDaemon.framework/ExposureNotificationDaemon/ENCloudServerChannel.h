@class NSURLSession, NSMutableDictionary, NSString, NSOperationQueue, NSURLSessionConfiguration, NSObject, NSHTTPCookieStorage;
@protocol OS_dispatch_queue;

@interface ENCloudServerChannel : NSObject <NSURLSessionDelegate>

@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSURLSessionConfiguration *sessionConfig;
@property (retain, nonatomic) NSURLSession *sourceApplicationSession;
@property (retain, nonatomic) NSURLSessionConfiguration *sourceApplicationSessionConfig;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSHTTPCookieStorage *cookieStorage;
@property (retain, nonatomic) NSMutableDictionary *requests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)enqueueRequest:(id)a0 withCompletion:(id /* block */)a1;

@end
