@class NSMutableDictionary, NSURLResponse, AMSURLRequestProperties, AMSURLSession, NSObject, NSMutableData, NSSet, NSMutableSet, AMSURLAction, NSData, NSURLSessionTask, NSError, NSURLSessionTaskMetrics;
@protocol OS_dispatch_queue;

@interface AMSURLTaskInfo : NSObject {
    NSMutableData *_data;
    NSMutableSet *_retryIdentifiers;
}

@property (class, readonly, nonatomic) NSMutableDictionary *sharedTaskStore;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedTaskQueue;

@property (readonly, nonatomic) struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } taskLock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) NSData *data;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSURLSessionTaskMetrics *metrics;
@property (nonatomic) unsigned long long previousAuthorizationCredentialSource;
@property (retain, nonatomic) AMSURLRequestProperties *properties;
@property (retain, nonatomic) AMSURLAction *receivedAction;
@property (retain, nonatomic) NSURLResponse *response;
@property (nonatomic) long long retryCount;
@property (readonly, nonatomic) NSSet *retryIdentifiers;
@property (retain, nonatomic) AMSURLSession *session;
@property (readonly, nonatomic) NSURLSessionTask *task;

+ (id)createTaskInfoForTask:(id)a0;
+ (void)removeTaskInfoForTask:(id)a0;
+ (id)taskInfoForTask:(id)a0;

- (void)performSyncBlock:(id /* block */)a0;
- (void)appendData:(id)a0;
- (id)initWithTask:(id)a0;
- (void)performAsyncBlock:(id /* block */)a0;
- (void)assertIsOnPrivateQueue;
- (id)createMetricsContextForDecodedObject:(id)a0;
- (void)addRetryIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)assertHasExclusiveAccess;
- (void)migrateFromTaskInfo:(id)a0;
- (void)performSyncBlockWithExclusiveAccess:(id /* block */)a0;

@end
