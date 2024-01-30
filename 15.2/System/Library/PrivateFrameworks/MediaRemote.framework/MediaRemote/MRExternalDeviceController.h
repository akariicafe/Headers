@class NSString, NSNetServiceBrowser, NSMutableSet, NSObject;
@protocol MRExternalDeviceControllerDelegate, OS_dispatch_queue;

@interface MRExternalDeviceController : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSNetServiceBrowser *_serviceBrowser;
    NSMutableSet *_discoveredDevices;
    NSMutableSet *_resolvingServices;
    NSMutableSet *_monitoringServices;
}

@property (weak, nonatomic) id<MRExternalDeviceControllerDelegate> delegate;
@property (readonly, nonatomic) NSString *bonjourServiceType;
@property (readonly, nonatomic, getter=isDiscovering) BOOL discovering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)externalDeviceClass;

- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void)netService:(id)a0 didUpdateTXTRecordData:(id)a1;
- (void)beginDiscovery;
- (void)netServiceDidResolveAddress:(id)a0;
- (void)endDiscovery;
- (void).cxx_destruct;
- (BOOL)_isManagedConfigIDAllowed:(id)a0;
- (id)initWithBonjourServiceType:(id)a0;
- (void)dealloc;

@end
