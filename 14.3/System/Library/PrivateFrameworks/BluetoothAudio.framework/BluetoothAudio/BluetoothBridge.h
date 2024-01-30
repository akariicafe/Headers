@class SFDeviceDiscovery, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BluetoothBridge : NSObject

@property (retain) NSObject<OS_dispatch_semaphore> *connectedSemaphore;
@property (retain) NSObject<OS_dispatch_semaphore> *disconnectedSemaphore;
@property (nonatomic) struct OpaqueFigEndpointManager { } *manager;
@property (retain) SFDeviceDiscovery *deviceDiscovery;
@property BOOL targetUserSession;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property struct BTSessionImpl { } *session;

+ (id)sharedBluetoothBridge;

- (struct BTDeviceImpl { } *)deviceFromAddress:(id)a0;
- (unsigned char)supportedFormats:(struct BTDeviceImpl { } *)a0;
- (id)init;
- (void)deviceDisconnected:(struct BTDeviceImpl { } *)a0;
- (void).cxx_destruct;
- (struct __CFDictionary { } *)createDescriptionWithDevice:(struct BTDeviceImpl { } *)a0;
- (void)descriptionAddNearby:(struct __CFDictionary { } *)a0 nearby:(BOOL)a1 batterySingle:(double)a2 batteryLeft:(double)a3 batteryRight:(double)a4 batteryCase:(double)a5;
- (void)disconnectFromAddress:(id)a0 completionHandler:(id /* block */)a1;
- (void)deviceConnected:(struct BTDeviceImpl { } *)a0;
- (BOOL)isAppleAudioDevice:(struct BTDeviceImpl { } *)a0;
- (void)startLEScanning:(BOOL)a0;
- (id)addressFromDevice:(struct BTDeviceImpl { } *)a0;
- (void)removeListeners;
- (void)connectToAddress:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopLEScanning;
- (struct __CFDictionary { } *)createDescriptionWithAddress:(id)a0 name:(id)a1 supportedFormats:(unsigned char)a2 deviceClassMinor:(unsigned int)a3 vendorID:(unsigned short)a4 productID:(unsigned short)a5 connected:(BOOL)a6 shareable:(BOOL)a7;
- (BOOL)isPaired:(struct BTDeviceImpl { } *)a0;
- (void)addListeners;
- (id)nameFromDevice:(struct BTDeviceImpl { } *)a0;
- (BOOL)isAudioDevice:(struct BTDeviceImpl { } *)a0;
- (BOOL)isConnected:(struct BTDeviceImpl { } *)a0;
- (struct BTDeviceImpl { } *)deviceFromAddressString:(id)a0;

@end
