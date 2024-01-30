@class NSMutableDictionary, NSXPCConnection, NSArray, RTCReportingDeallocNotifier, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, RTCReportingMessageSentNotifier;

@interface RTCReporting : NSObject <RTCReportingDeallocNotifierDelegate> {
    NSObject<OS_dispatch_queue> *_reportingQueue;
    NSObject<OS_dispatch_queue> *_reportingPeriodicTasksQueue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_timer;
    int _counter;
    NSMutableDictionary *_periodicServiceDict;
    NSArray *_enabledBackendNames;
    NSArray *_whitelistedEvents;
    NSArray *_blacklistedEvents;
    RTCReportingDeallocNotifier *_strongDeallocNotifier;
    id _weakDeallocNotifier;
    id _weakMessageSentDelegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _configLock;
}

@property (nonatomic) id<RTCReportingMessageSentNotifier> messageSentDelegate;
@property (copy, nonatomic) id /* block */ messageLoggingBlock;

+ (BOOL)closeEphemeralSessiontWithSessionId:(id)a0;
+ (BOOL)sendOneMessageWithSessionInfo:(id)a0 userInfo:(id)a1 category:(unsigned short)a2 type:(unsigned short)a3 payload:(id)a4 error:(id *)a5;
+ (id)newSecureHierarchyTokenFromParentToken:(id)a0;
+ (id)createEphemeralSessionWithSessionInfo:(id)a0 userInfo:(id)a1 error:(id *)a2;
+ (id)newHierarchyTokenFromParentToken:(id)a0;
+ (id)getPersistentIdentifierForDNU:(BOOL)a0;
+ (void)regeneratePersistentIdentifierForDNU:(BOOL)a0;

- (void)aboutToDealloc;
- (BOOL)sendMessageWithDictionary:(id)a0 error:(id *)a1;
- (BOOL)flushMessages;
- (void)_myPeriodicTask:(unsigned short)a0 type:(unsigned short)a1 intervalMultiplier:(int)a2 updateTimeout:(unsigned long long)a3;
- (void)flushMessagesWithCompletion:(id /* block */)a0;
- (id)initWithSessionInfo:(id)a0 userInfo:(id)a1 frameworksToCheck:(id)a2;
- (BOOL)isWhitelistedEvent:(unsigned short)a0;
- (id)retain;
- (BOOL)unregisterPeriodTaskForModule:(unsigned int)a0;
- (void)stopLogTimer;
- (void)startConfigurationWithCompletionHandler:(id /* block */)a0;
- (BOOL)uploadDataArray:(id)a0 completionHandler:(id /* block */)a1;
- (void)notifyMessageWasSent:(id)a0;
- (BOOL)isBlacklistedEvent:(unsigned short)a0;
- (void)updateSharedDataWithDictionary:(id)a0;
- (BOOL)registerPeriodicTaskForModule:(unsigned int)a0 needToUpdate:(BOOL)a1 needToReport:(BOOL)a2 serviceBlock:(id /* block */)a3;
- (BOOL)serverSupportsFileUpload;
- (BOOL)setDigestKey:(id)a0 algorithm:(int)a1;
- (id)getReportingSessionID;
- (void)dealloc;
- (id)initWithSessionInfo:(id)a0 userInfo:(id)a1 frameworksToCheck:(id)a2 aggregationBlock:(id /* block */)a3;
- (oneway void)release;
- (void)fetchReportingStatesWithUserInfo:(id)a0 fetchComplete:(id /* block */)a1;
- (void)updateSharedDataForKey:(id)a0 value:(id)a1;
- (void)startLogTimerWithInterval:(int)a0 reportingMultiplier:(int)a1 category:(unsigned short)a2 type:(unsigned short)a3;
- (BOOL)uploadFileWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)finishSession;
- (BOOL)sendMessageWithCategory:(unsigned short)a0 type:(unsigned short)a1 payload:(id)a2 error:(id *)a3;

@end
