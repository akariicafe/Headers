@class NSString, FMXPCSession, FMXPCServiceDescription, NSObject, AKAccountManager;
@protocol OS_dispatch_queue, SPBeaconManagerXPCProtocol;

@interface SearchPartyAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {
    AKAccountManager *_akAccountManager;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPBeaconManagerXPCProtocol> proxy;
@property (retain, nonatomic) id<SPBeaconManagerXPCProtocol> userAgentProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canRemoveAccount:(id)a0 inStore:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)_extractPhoneNumberFrom:(id)a0;
- (void)primaryAccountModified;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;

@end
