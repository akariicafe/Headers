@class NSURLSession, NSError, NSMutableURLRequest, NSString, NSMutableData, NSObject, NSURLSessionDataTask;
@protocol OS_dispatch_semaphore;

@interface AIASRequest : NSObject <NSURLSessionDataDelegate>

@property (retain) NSMutableURLRequest *URLRequest;
@property (retain) NSMutableData *data;
@property BOOL done;
@property BOOL success;
@property struct __AppleIDAuthSupportData { } *context;
@property (retain) NSObject<OS_dispatch_semaphore> *sema;
@property (retain) NSURLSession *session;
@property (retain) NSURLSessionDataTask *task;
@property (retain) NSError *error;
@property (retain) NSString *networkTaskDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)resume;
- (id)initWithURL:(id)a0 data:(struct __CFDictionary { } *)a1 clientInfo:(id)a2 proxiedClientInfo:(id)a3 companionClientInfo:(id)a4 appleITeamId:(id)a5 appleIClientId:(id)a6 additionalHeaders:(id)a7;

@end
