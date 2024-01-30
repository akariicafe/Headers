@class NSError, NSURLSessionTask, NSURLSessionTaskMetrics, NSMutableDictionary, AMSURLAction, NSURLResponse, NSObject, AMSURLRequestProperties, NSMutableData, NSMutableSet, AMSURLSession;
@protocol OS_dispatch_queue;

@interface AMSURLTaskInfo : NSObject

@property (class, readonly, nonatomic) NSMutableDictionary *sharedTaskStore;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedTaskQueue;

@property (retain, nonatomic) NSMutableData *data;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long previousAuthorizationCredentialSource;
@property (retain, nonatomic) NSURLSessionTaskMetrics *metrics;
@property (retain, nonatomic) AMSURLRequestProperties *properties;
@property (retain, nonatomic) AMSURLAction *receivedAction;
@property (retain, nonatomic) NSURLResponse *response;
@property (nonatomic) long long retryCount;
@property (retain, nonatomic) NSMutableSet *retryIdentifiers;
@property (retain, nonatomic) AMSURLSession *session;
@property (retain, nonatomic) NSURLSessionTask *task;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (readonly, nonatomic) NSMutableDictionary *userInfo;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (id)createTaskInfoForTask:(id)a0;
+ (void)removeTaskInfoForTask:(id)a0;
+ (id)taskInfoForTask:(id)a0;

- (id)initWithTask:(id)a0;
- (void).cxx_destruct;
- (void)migrateFromTaskInfo:(id)a0;

@end
