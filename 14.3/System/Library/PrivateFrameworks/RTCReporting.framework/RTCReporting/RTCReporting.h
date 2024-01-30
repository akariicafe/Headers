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
}

@property (nonatomic) id<RTCReportingMessageSentNotifier> messageSentDelegate;
@property (copy, nonatomic) id /* block */ messageLoggingBlock;

+ (void)regeneratePersistentIdentifierForDNU:(BOOL)a0;
+ (id)getPersistentIdentifierForDNU:(BOOL)a0;
+ (BOOL)sendOneMessageWithSessionInfo:(id)a0 userInfo:(id)a1 category:(unsigned short)a2 type:(unsigned short)a3 payload:(id)a4 error:(id *)a5;
+ (id)createEphemeralSessionWithSessionInfo:(id)a0 userInfo:(id)a1 error:(id *)a2;
+ (id)newHierarchyTokenFromParentToken:(id)a0;
+ (id)newSecureHierarchyTokenFromParentToken:(id)a0;
+ (BOOL)closeEphemeralSessiontWithSessionId:(id)a0;

- (BOOL)sendMessageWithDictionary:(id)a0 error:(id *)a1;
- (void)startLogTimerWithInterval:(int)a0 reportingMultiplier:(int)a1 category:(unsigned short)a2 type:(unsigned short)a3;
- (void)startConfigurationWithCompletionHandler:(id /* block */)a0;
- (BOOL)registerPeriodicTaskForModule:(unsigned int)a0 needToUpdate:(BOOL)a1 needToReport:(BOOL)a2 serviceBlock:(id /* block */)a3;
- (oneway void)release;
- (void)dealloc;
- (void)notifyMessageWasSent:(id)a0;
- (BOOL)isWhitelistedEvent:(unsigned short)a0;
- (id)initWithSessionInfo:(id)a0 userInfo:(id)a1 frameworksToCheck:(id)a2 aggregationBlock:(id /* block */)a3;
- (id)initWithSessionInfo:(id)a0 userInfo:(id)a1 frameworksToCheck:(id)a2;
- (void)stopLogTimer;
- (BOOL)flushMessages;
- (void)updateSharedDataForKey:(id)a0 value:(id)a1;
- (BOOL)unregisterPeriodTaskForModule:(unsigned int)a0;
- (void)fetchReportingStatesWithUserInfo:(id)a0 fetchComplete:(id /* block */)a1;
- (void)flushMessagesWithCompletion:(id /* block */)a0;
- (BOOL)uploadDataArray:(id)a0 completionHandler:(id /* block */)a1;
- (id)retain;
- (void)aboutToDealloc;
- (BOOL)sendMessageWithCategory:(unsigned short)a0 type:(unsigned short)a1 payload:(id)a2 error:(id *)a3;
- (BOOL)serverSupportsFileUpload;
- (void)updateSharedDataWithDictionary:(id)a0;
- (BOOL)isBlacklistedEvent:(unsigned short)a0;
- (void)_myPeriodicTask:(unsigned short)a0 type:(unsigned short)a1 intervalMultiplier:(int)a2 updateTimeout:(unsigned long long)a3;
- (BOOL)uploadFileWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)finishSession;
- (BOOL)setDigestKey:(id)a0 algorithm:(int)a1;

@end
