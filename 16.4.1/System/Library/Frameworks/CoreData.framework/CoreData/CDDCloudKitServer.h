@class CDDCloudKitServerConfiguration, NSString, NSPersistentContainer, NSError, PFCloudKitContainerProvider, NSObject, NSXPCListener, CKScheduler;
@protocol OS_dispatch_group;

@interface CDDCloudKitServer : NSObject <NSXPCListenerDelegate, CDDCloudKitServerProxy, _PFCoreDataCloudKitServer> {
    BOOL _initialized;
    NSPersistentContainer *_metadataContainer;
    NSObject<OS_dispatch_group> *_initializationGroup;
    NSError *_lastInitializationError;
}

@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly, copy, nonatomic) CDDCloudKitServerConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PFCloudKitContainerProvider *containerProvider;
@property (readonly, nonatomic) CKScheduler *scheduler;

- (void)setUp;
- (void)tearDown;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (oneway void)handleMessage:(id)a0 reply:(id /* block */)a1;
- (void)dealloc;
- (id)initWithListener:(id)a0 configuration:(id)a1;
- (void)finishedActivity:(id)a0 withResult:(id)a1 inManagedObjectContext:(id)a2;

@end
