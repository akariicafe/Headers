@class NSString, CKVSettings, CKVIndexManager, CKVDonateConnectionFactory, NSObject, NSXPCListener, CKVDonationManager, CKVTaskHandler;
@protocol OS_dispatch_queue, CKVAdminServiceProvider;

@interface CKVDispatcher : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    CKVIndexManager *_indexManager;
    CKVDonateConnectionFactory *_donateConnectionFactory;
    NSObject<CKVAdminServiceProvider> *_adminServiceProvider;
    CKVSettings *_settings;
    CKVTaskHandler *_taskHandler;
    CKVDonationManager *_donationManager;
}

@property (readonly, nonatomic) NSXPCListener *donateServiceListener;
@property (readonly, nonatomic) NSXPCListener *adminServiceListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDispatcher;

- (void)runMigration:(id /* block */)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)registerXPCActivities;
- (BOOL)_adminServiceShouldAcceptNewConnection:(id)a0;
- (BOOL)_donateServiceShouldAcceptNewConnection:(id)a0;
- (void)runMaintenance:(id /* block */)a0;
- (BOOL)handleDistributedNotificationEventWithName:(id)a0;
- (void)setupXPCListeners;
- (BOOL)handleDarwinNotificationEventWithName:(id)a0;
- (id)initWithQueue:(id)a0 indexManager:(id)a1 donateConnectionFactory:(id)a2 adminServiceProvider:(id)a3 taskHandler:(id)a4 settings:(id)a5;
- (id)_listenerWithMachServiceName:(id)a0 delegate:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
