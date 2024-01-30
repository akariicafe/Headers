@class BBBulletin, BBAction, NSString, BBObserver;

@interface NCBulletinActionRunner : NSObject <NCNotificationActionRunner>

@property (readonly, nonatomic) BBAction *action;
@property (readonly, nonatomic) BBBulletin *bulletin;
@property (readonly, nonatomic) BBObserver *observer;
@property (nonatomic) BOOL responseWasSent;
@property (nonatomic) BOOL shouldForwardAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeAction:(id)a0 fromOrigin:(id)a1 endpoint:(id)a2 withParameters:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)initWithAction:(id)a0 bulletin:(id)a1 observer:(id)a2;

@end
