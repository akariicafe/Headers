@interface APRequestHandler : NSObject

+ (void)addRequestWithURL:(id)a0 account:(id)a1 completion:(id /* block */)a2;
+ (void)localApproveRequestWithItemIdentifier:(id)a0 completion:(id /* block */)a1;
+ (void)updateRequestWithIdentifier:(id)a0 action:(long long)a1 completion:(id /* block */)a2;
+ (void)resetAccountWithType:(long long)a0;
+ (void)presentProductPageWithTitle:(id)a0 body:(id)a1 approve:(id)a2 decline:(id)a3 itemIdentifier:(id)a4 previewURL:(id)a5;
+ (void)didReceiveStorePushNotificationWithPayload:(id)a0;
+ (void)startDaemon;

@end
