@class NSString, FMXPCSession, FMXPCServiceDescription, NSObject, AKAccountManager;
@protocol OS_dispatch_queue;

@interface SearchPartyAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {
    AKAccountManager *_akAccountManager;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)proxyWithErrorHandler:(id /* block */)a0;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (void)primaryAccountModified;
- (BOOL)canRemoveAccount:(id)a0 inStore:(id)a1;
- (void).cxx_destruct;
- (id)_extractPhoneNumberFrom:(id)a0;
- (id)userAgentProxyWithErrorHandler:(id /* block */)a0;

@end
