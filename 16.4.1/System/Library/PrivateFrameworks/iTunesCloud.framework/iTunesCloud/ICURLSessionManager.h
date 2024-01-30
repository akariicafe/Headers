@class NSMutableDictionary, ICURLSession, NSObject;
@protocol OS_dispatch_queue;

@interface ICURLSessionManager : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_cachedSessions;
}

@property (class, readonly, nonatomic) ICURLSessionManager *sharedSessionManager;
@property (class, readonly, nonatomic) ICURLSession *defaultSession;
@property (class, readonly, nonatomic) ICURLSession *highPrioritySession;
@property (class, readonly, nonatomic) ICURLSession *unlimitedHighPrioritySession;

- (void)addSession:(id)a0 withIdentifier:(id)a1;
- (id)_defaultSessionWithQualityOfService:(long long)a0 maxConcurrentRequests:(unsigned long long)a1;
- (id)sessionWithIdentifier:(id)a0 creationBlock:(id /* block */)a1;
- (id)sessionWithQualityOfService:(long long)a0;
- (id)sessionWithIdentifier:(id)a0 configuration:(id)a1;
- (id)sessionWithIdentifier:(id)a0;
- (id)_defaultSessionIdentifierWithQualityOfService:(long long)a0 maxConcurrentRequests:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)removeSessionWithIdentifier:(id)a0;

@end
