@class CUBonjourBrowser, NSString, SFService, NSSet, NSMutableDictionary, NSObject, SFDeviceDiscovery, CUNANSubscriber;
@protocol OS_dispatch_queue;

@interface CUNetServiceDiscovery : NSObject {
    BOOL _activated;
    unsigned char _bleActionType;
    SFService *_bleAdvertiser;
    NSMutableDictionary *_bleDevices;
    SFDeviceDiscovery *_bleDiscovery;
    NSString *_bleServiceIdentifier;
    NSMutableDictionary *_endpoints;
    CUBonjourBrowser *_infraBonjourBrowser;
    NSMutableDictionary *_infraBonjourDevices;
    unsigned int _infraBonjourBrowserID;
    NSMutableDictionary *_nanEndpoints;
    CUNANSubscriber *_nanSubscriber;
    unsigned int _nanSubscriberID;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    BOOL _updatePending;
    BOOL _blePeerFilterChanged;
    BOOL _serviceTypeChanged;
}

@property (nonatomic) int awdlControl;
@property (nonatomic) unsigned int bleDiscoveryFlags;
@property (copy, nonatomic) NSSet *blePeerFilter;
@property (nonatomic) unsigned int changeFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) int infraControl;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) int nanControl;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) id /* block */ endpointFoundHandler;
@property (copy, nonatomic) id /* block */ endpointLostHandler;
@property (copy, nonatomic) id /* block */ endpointChangedHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (id)init;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (id)description;
- (void)_invalidate;
- (void)_updateLocked;
- (id)descriptionWithLevel:(int)a0;
- (void)_activateSafeInvokeBlock:(id /* block */)a0;
- (void)_bleTriggerEnsureStarted;
- (void)_bleTriggerEnsureStopped;
- (void)_bleTriggerDeviceFound:(id)a0;
- (void)_bleTriggerDeviceLost:(id)a0;
- (void)_bleScannerEnsureStarted;
- (void)_bleScannerEnsureStopped;
- (void)invalidate;
- (void)_infraBonjourBrowserEnsureStarted;
- (void)_infraBonjourBrowserEnsureStopped;
- (void)_infraBonjourDeviceFound:(id)a0;
- (void)_infraBonjourDeviceLost:(id)a0;
- (void)_nanEndpointFound:(id)a0;
- (void)_infraBonjourDeviceChanged:(id)a0 changes:(unsigned int)a1;
- (void)_nanSubscriberEnsureStarted;
- (void)_nanSubscriberEnsureStopped;
- (void)_nanEndpointLost:(id)a0;
- (void)_nanEndpointChanged:(id)a0 changes:(unsigned int)a1;

@end
