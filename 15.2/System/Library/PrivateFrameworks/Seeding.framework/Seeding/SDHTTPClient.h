@class NSURLSession, NSString, NSURL, NSObject;
@protocol OS_os_log;

@interface SDHTTPClient : NSObject <NSURLSessionDelegate>

@property (class, readonly, nonatomic) SDHTTPClient *sharedInstance;

@property (retain) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) NSURLSession *urlSession;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
