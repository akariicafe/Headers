@class NSString, EFObservable, EMRemoteConnection, NSObject;
@protocol OS_os_log, EFObserver;

@interface EMClientState : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain) EMRemoteConnection *connection;
@property (nonatomic) BOOL isForeground;
@property (retain, nonatomic) EFObservable<EFObserver> *foregroundObservable;
@property (nonatomic) BOOL isRunningTests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteInterface;

- (void)exitDaemon;
- (id)initWithRemoteConnection:(id)a0;
- (void)setStateForDemoMode:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_handleApplicationDidEnterBackground;
- (void)_handleApplicationWillEnterForeground;
- (void)_performAsyncUpdate:(id /* block */)a0;
- (id)daemonBoosterWithDescription:(id)a0;
- (void)setCurrentlyVisibleMailboxObjectIDs:(id)a0;
- (void)setCurrentlyVisibleMailboxes:(id)a0;
- (void)test_handleApplicationDidEnterBackground;
- (void)test_handleApplicationWillEnterForeground;

@end
