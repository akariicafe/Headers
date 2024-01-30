@class NSString, NSDistributedNotificationCenter;
@protocol VSRemoteNotifierDelegate;

@interface VSRemoteNotifier : NSObject

@property (copy, nonatomic) NSString *notificationObject;
@property (retain, nonatomic) NSDistributedNotificationCenter *distributedNotificationCenter;
@property (readonly, copy, nonatomic) NSString *remoteNotificationName;
@property (weak, nonatomic) id<VSRemoteNotifierDelegate> delegate;

+ (id)_currentProcessIdentifier;

- (id)initWithNotificationName:(id)a0;
- (void)postNotification;
- (void)dealloc;
- (id)init;
- (void)_didReceiveDistributedNotification:(id)a0;
- (void).cxx_destruct;
- (void)postNotificationWithUserInfo:(id)a0;

@end
