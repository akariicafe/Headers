@class NSString;
@protocol MTRDevicePairingDelegate;

@interface MTRDevicePairingDelegateShim : NSObject <MTRDeviceControllerDelegate>

@property (readonly, nonatomic) id<MTRDevicePairingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)controller:(id)a0 commissioningComplete:(id)a1;
- (void)controller:(id)a0 commissioningSessionEstablishmentDone:(id)a1;
- (void)controller:(id)a0 statusUpdate:(long long)a1;
- (void)onPairingDeleted:(id)a0;

@end
