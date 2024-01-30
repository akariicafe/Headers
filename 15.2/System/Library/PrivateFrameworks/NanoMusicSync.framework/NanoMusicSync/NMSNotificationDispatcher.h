@class NSString, NSObject;
@protocol NMSNotificationDispatcherDelegate, OS_dispatch_queue;

@interface NMSNotificationDispatcher : NSObject {
    int _localNotifyToken;
    int _remoteNotifyToken;
    NSString *_localDarwinNotificationName;
    NSString *_remoteDarwinNotificationName;
    long long _waitingCount;
    BOOL _hasPendingUpdates;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSString *baseNotificationName;
@property (weak, nonatomic) id<NMSNotificationDispatcherDelegate> delegate;

- (void)scheduleLocalDarwinNotification;
- (void)endWaitingForUpdates;
- (void)_handleLocalNotificationIgnoringSenderPID:(BOOL)a0;
- (void).cxx_destruct;
- (void)_postLocalDarwinNotification;
- (id)initWithNotificationName:(id)a0;
- (void)dealloc;
- (void)_handleRemoteNotification;
- (void)beginWaitingForUpdates;

@end
