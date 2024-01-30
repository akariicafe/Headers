@class NSURLSession, NSString, NSDictionary, NSURL, NSObject;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDServerBag : HMFObject <NSURLSessionDelegate> {
    id<HMFLocking> _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSURLSession *urlSession;
@property (nonatomic) BOOL refreshing;
@property (copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) unsigned long long environment;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSURL *activationHostnameURL;
@property (readonly, copy, nonatomic) NSURL *activationCertificateHostnameURL;
@property (readonly, copy, nonatomic) NSURL *accessoryReportURL;
@property (readonly, nonatomic) double accessoryReportTimeout;
@property (readonly, nonatomic, getter=isControlCenterEnabled) BOOL controlCenterEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)activationCertificateHostnameURLOverride;
+ (id)activationHostnameURLOverride;
+ (id)serverBagURLForEnvironment:(unsigned long long)a0;
+ (id)defaultServerBag;

- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (id)initWithEnvironment:(unsigned long long)a0;
- (void)_loadDefaultBag;
- (void)_synchronizeWithCompletion:(id /* block */)a0;
- (void)_handleServerBagResponseData:(id)a0 response:(id)a1 error:(id)a2 completionHandler:(id /* block */)a3;

@end
