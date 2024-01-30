@class NSString, NSMutableSet, NSObject, CBPeripheralManager;
@protocol OS_dispatch_queue;

@interface CUBLEServer : NSObject <CBPeripheralManagerDelegate> {
    id /* block */ _activateCompletion;
    NSMutableSet *_connections;
    BOOL _invalidateCalled;
    CBPeripheralManager *_peripheralManager;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (copy, nonatomic) id /* block */ connectionStartedHandler;
@property (copy, nonatomic) id /* block */ connectionEndedHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned short listenPSM;
@property (nonatomic) unsigned short listeningPSM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)peripheralManager:(id)a0 didUnpublishL2CAPChannel:(unsigned short)a1 error:(id)a2;
- (void)peripheralManager:(id)a0 didOpenL2CAPChannel:(id)a1 error:(id)a2;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_handleConnectionInvalidated:(id)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)peripheralManagerDidUpdateState:(id)a0;
- (void)peripheralManager:(id)a0 didPublishL2CAPChannel:(unsigned short)a1 error:(id)a2;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)_startIfNeeded;

@end
