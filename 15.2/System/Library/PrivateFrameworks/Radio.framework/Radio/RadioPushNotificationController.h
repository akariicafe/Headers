@class NSString, APSConnection;
@protocol RadioPushNotificationControllerDelegate;

@interface RadioPushNotificationController : NSObject <APSConnectionDelegate> {
    APSConnection *_connection;
    NSString *_environment;
    BOOL _pushEnabled;
}

@property (weak, nonatomic) id<RadioPushNotificationControllerDelegate> delegate;
@property (nonatomic) BOOL notificationsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (id)_portNameForEnvironmentName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)connection:(id)a0 didReceiveMessageForTopic:(id)a1 userInfo:(id)a2;
- (void)_loadURLBagWithCompletionHandler:(id /* block */)a0;

@end
