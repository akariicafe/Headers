@class NSXPCConnection;

@interface INDaemonConnection : NSObject {
    NSXPCConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)renewCredentialsWithCompletion:(id /* block */)a0;
- (void)updateOfferForAccount:(id)a0 offerId:(id)a1 buttonId:(id)a2 info:(id)a3 completion:(id /* block */)a4;
- (id)iCloudServerOfferForAccount:(id)a0 options:(id)a1 error:(id *)a2;
- (void)commonHeadersForRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)presentHiddenFreshmintWithContext:(id)a0 completion:(id /* block */)a1;
- (void)notifyDeviceStorageLevel:(long long)a0 completion:(id /* block */)a1;
- (BOOL)registerAccount:(id)a0 foriCloudNotificationsWithReason:(unsigned long long)a1 error:(id *)a2;
- (void)registerAccount:(id)a0 foriCloudNotificationsWithReason:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)unregisterAccount:(id)a0 fromiCloudNotificationsWithError:(id *)a1;
- (void)unregisterAccount:(id)a0 fromiCloudNotificationsWithCompletion:(id /* block */)a1;
- (BOOL)clearAllRegistrationDigestsWithError:(id *)a0;
- (id)diagnosticReport;
- (void)iCloudServerOfferForAccount:(id)a0 options:(id)a1 completion:(id /* block */)a2;

@end
