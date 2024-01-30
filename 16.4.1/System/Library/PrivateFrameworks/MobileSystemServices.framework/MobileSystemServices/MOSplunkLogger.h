@class NSNumber, NSString, NSURL, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MOSplunkLogger : NSObject <NSURLSessionDelegate>

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL allowInvalidCert;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSURL *splunkUploadURL;
@property (retain, nonatomic) NSURL *configurationURL;
@property (retain, nonatomic) NSString *splunkTopic;
@property (retain, nonatomic) NSNumber *samplingPercentage;
@property (nonatomic) double lastSuccessfulConfigurationLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_onQueue_loadConfiguration;
- (id)initWithName:(id)a0 configurationURL:(id)a1 splunkTopic:(id)a2 version:(id)a3 allowInvalidCert:(BOOL)a4;
- (void)logEventNamed:(id)a0 value:(id)a1;
- (void)uploadEventsWithCompletion:(id /* block */)a0;

@end
