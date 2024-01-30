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

- (id)initWithRemoteConnection:(id)a0;
- (void).cxx_destruct;
- (void)setCurrentlyVisibleMailboxes:(id)a0;
- (void)_handleApplicationDidEnterBackground;
- (void)_performAsyncUpdate:(id /* block */)a0;
- (id)daemonBoosterWithDescription:(id)a0;
- (void)_handleApplicationWillEnterForeground;

@end
