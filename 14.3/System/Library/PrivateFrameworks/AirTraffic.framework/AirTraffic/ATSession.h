@class NSError, NSString, NSXPCListenerEndpoint, NSHashTable, NSXPCConnection, NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject;
@protocol ATMessageLink, OS_dispatch_queue, OS_dispatch_group;

@interface ATSession : NSObject <ATSessionConnection, NSSecureCoding> {
    NSMutableArray *_sessionTasks;
    NSMutableDictionary *_sessionTasksByIdentifier;
    NSMutableSet *_observing;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    NSXPCConnection *_connection;
    double _startTime;
    double _finishTime;
    BOOL _suspended;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (getter=isSuspended) BOOL suspended;
@property (getter=isRunning) BOOL running;
@property (getter=isFinished) BOOL finished;
@property (getter=isCancelled) BOOL cancelled;
@property (retain) NSString *sessionTypeIdentifier;
@property (retain) NSString *sessionIdentifier;
@property (retain) NSString *localizedDescription;
@property (retain, nonatomic) NSString *dataClass;
@property double progress;
@property (copy) NSError *error;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (weak, nonatomic) id<ATMessageLink> messageLink;
@property (readonly) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_remoteSessionsWithTypeIdentifier:(id)a0;
+ (id)sessionsWithSessionTypeIdentifier:(id)a0;
+ (unsigned long long)_remoteActiveSessionCountWithTypeIdentifier:(id)a0;
+ (void)_cancelSessionWithIdentifier:(id)a0;
+ (void)setSessionHost:(BOOL)a0;
+ (id)sessionsWithSessionTypeIdentifier:(id)a0 dataClass:(id)a1;
+ (unsigned long long)activeSessionCountWithSessionTypeIdentifier:(id)a0;
+ (id)allSessions;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)initWithSessionIdentifier:(id)a0 sessionTypeIdentifier:(id)a1;
- (void)_performSelectorOnObservers:(SEL)a0 object:(id)a1;
- (void)_beginTasks:(id)a0;
- (void)_observeKeysForTask:(id)a0;
- (id)initWithSessionTypeIdentifier:(id)a0;
- (void)beginSessionTask:(id)a0;
- (void)updateSessionTask:(id)a0;
- (void)_stopObservingKeysForTask:(id)a0;
- (void)addSessionTasks:(id)a0;
- (void)waitToFinish;
- (id)sessionTasksWithGroupingKey:(id)a0;
- (void)_finishWithError:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)sessionTasks;
- (void)start;
- (id)_keysToObserve;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)encodeWithCoder:(id)a0;
- (void)_performSelectorOnObservers:(SEL)a0 object:(id)a1 object:(id)a2;

@end
