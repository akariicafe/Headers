@class NSUUID, NSString;
@protocol SFActivityScannerDelegate;

@interface SFActivityScanner : NSObject <SFContinuityScanManagerObserver>

@property (retain) NSUUID *identifier;
@property (readonly) id<SFActivityScannerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scanForTypes:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)activityPayloadFromDevice:(id)a0 forAdvertisementPayload:(id)a1 command:(id)a2 timeout:(long long)a3 withCompletionHandler:(id /* block */)a4;
- (void)dealloc;
- (void)scanManager:(id)a0 pairedDevicesChanged:(id)a1;
- (void)scanManager:(id)a0 receivedAdvertisement:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)scanManager:(id)a0 foundDeviceWithDevice:(id)a1;
- (void)scanManager:(id)a0 lostDeviceWithDevice:(id)a1;

@end
