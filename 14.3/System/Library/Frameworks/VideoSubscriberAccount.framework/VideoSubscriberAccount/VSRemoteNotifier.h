@class NSString, NSDistributedNotificationCenter;
@protocol VSRemoteNotifierDelegate;

@interface VSRemoteNotifier : NSObject

@property (copy, nonatomic) NSString *notificationObject;
@property (retain, nonatomic) NSDistributedNotificationCenter *distributedNotificationCenter;
@property (readonly, copy, nonatomic) NSString *remoteNotificationName;
@property (weak, nonatomic) id<VSRemoteNotifierDelegate> delegate;

+ (id)_currentProcessIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)_didReceiveDistributedNotification:(id)a0;
- (void)dealloc;
- (void)postNotification;
- (id)initWithNotificationName:(id)a0;
- (void)postNotificationWithUserInfo:(id)a0;

@end
