@class NSMutableDictionary, ICURLSession, NSObject;
@protocol OS_dispatch_queue;

@interface ICURLSessionManager : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_cachedSessions;
}

@property (class, readonly) ICURLSessionManager *sharedSessionManager;
@property (class, readonly) ICURLSession *defaultSession;
@property (class, readonly) ICURLSession *highPrioritySession;

- (id)init;
- (void).cxx_destruct;
- (id)sessionWithIdentifier:(id)a0;
- (id)_sessionIdentifierWithQualityOfService:(long long)a0;
- (void)removeSessionWithIdentifier:(id)a0;
- (void)addSession:(id)a0 withIdentifier:(id)a1;
- (id)sessionWithIdentifier:(id)a0 configuration:(id)a1;
- (id)_newSessionWithQualityOfService:(long long)a0;
- (id)sessionWithQualityOfService:(long long)a0;

@end
