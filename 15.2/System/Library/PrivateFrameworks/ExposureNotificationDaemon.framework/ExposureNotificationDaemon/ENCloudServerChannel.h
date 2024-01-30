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

- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)enqueueRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)dealloc;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;

@end
