@class CURetrier, NSString, NSDictionary, NSData, NSObject, CBPeripheralManager;
@protocol OS_dispatch_queue;

@interface CUBLEAdvertiser : NSObject <CBPeripheralManagerDelegate> {
    BOOL _activateCalled;
    NSDictionary *_advertiseParametersCurrent;
    BOOL _changesPending;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    CBPeripheralManager *_peripheralManager;
    CURetrier *_retrier;
    BOOL _startAdvertisingCalled;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (copy, nonatomic) NSData *appleManufacturerData;
@property (nonatomic) unsigned int advertiseFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSData *lgBTAddress;
@property (copy, nonatomic) NSData *lgDeviceID;
@property (copy, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_ensureStarted;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)peripheralManagerDidStartAdvertising:(id)a0 error:(id)a1;
- (void)_invalidated;
- (void)activate;
- (id)_advertiseParameters;
- (void)_advertiseParametersAddLGWake:(id)a0;
- (void)_advertiseParametersAddOSR;
- (id)_advertiseParametersSummary:(id)a0;
- (void)_invalidate;
- (void)_ensureStopped;
- (void)peripheralManagerDidUpdateState:(id)a0;
- (void)invalidate;

@end
