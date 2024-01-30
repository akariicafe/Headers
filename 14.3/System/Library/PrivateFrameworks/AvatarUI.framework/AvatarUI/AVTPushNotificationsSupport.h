@class AVTPushNotificationsConnectionFactory, APSConnection, NSString, AVTCoreEnvironment, NSObject;
@protocol OS_dispatch_queue, AVTUILogger, AVTPushNotificationsSupportDelegate;

@interface AVTPushNotificationsSupport : NSObject <APSConnectionDelegate, AVTPushNotificationsSupport>

@property (retain, nonatomic) APSConnection *pushConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly, nonatomic) AVTCoreEnvironment *environment;
@property (readonly, nonatomic) AVTPushNotificationsConnectionFactory *connectionFactory;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVTPushNotificationsSupportDelegate> delegate;

+ (id)topic;

- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void).cxx_destruct;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (void)getAPSEnvironmentString:(id /* block */)a0;
- (void)setupConnectionWithCompletionHandler:(id /* block */)a0;
- (void)startListeningToPushNotifications;
- (void)stopListeningToPushNotifications;
- (id)initWithEnvironment:(id)a0 connectionFactory:(id)a1;

@end
