@class CUBonjourAdvertiser, NSString, NSSet, NSMutableDictionary, NSDictionary, NSObject, CUNANPublisher, SFDeviceDiscovery;
@protocol OS_dispatch_queue;

@interface CUNetServiceAdvertiser : NSObject {
    BOOL _activated;
    CUBonjourAdvertiser *_awdlBonjourAdvertiser;
    NSMutableDictionary *_bleDevices;
    SFDeviceDiscovery *_bleDiscovery;
    unsigned long long _bleDiscoveryFlags;
    CUBonjourAdvertiser *_infraBonjourAdvertiser;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    CUNANPublisher *_nanPublisher;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    BOOL _updatePending;
    BOOL _blePeerFilterChanged;
    BOOL _portChanged;
    BOOL _serviceInfoChanged;
    BOOL _serviceTypeChanged;
}

@property (nonatomic) int awdlControl;
@property (copy, nonatomic) NSSet *blePeerFilter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) int infraControl;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) int nanControl;
@property (nonatomic) int port;
@property (copy, nonatomic) NSDictionary *serviceInfo;
@property (copy, nonatomic) NSString *serviceType;

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
- (void)_awdlBonjourAdvertiserEnsureStarted;
- (void)_awdlBonjourAdvertiserEnsureStopped;
- (void)_bleTriggerEnsureStarted;
- (void)_bleTriggerEnsureStopped;
- (void)_bleTriggerDeviceFound:(id)a0;
- (void)_bleTriggerDeviceLost:(id)a0;
- (void)_infraBonjourAdvertiserEnsureStarted;
- (void)_infraBonjourAdvertiserEnsureStopped;
- (void)_nanAdvertiserEnsureStarted;
- (void)_nanAdvertiserEnsureStopped;
- (void)invalidate;

@end
