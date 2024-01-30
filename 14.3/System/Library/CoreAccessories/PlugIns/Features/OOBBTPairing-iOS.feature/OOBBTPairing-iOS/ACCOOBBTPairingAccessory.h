@class NSString, NSData, ACCiAP2ShimAccessory, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ACCOOBBTPairingAccessory : NSObject

@property struct BTAccessoryManagerImpl { } *BTAccessoryManager;
@property (retain) NSObject<OS_dispatch_queue> *BTSessionQueue;
@property struct BTSessionImpl { } *BTSession;
@property BOOL isBTReady;
@property (retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain) NSObject<OS_dispatch_semaphore> *setup_complete_semaphore;
@property struct BTDeviceImpl { } *currentRemoteBTDevice;
@property (retain, nonatomic) ACCiAP2ShimAccessory *iap2ShimAccessory;
@property (retain) NSString *displayName;
@property (retain) NSData *certData;
@property (retain) NSData *certSerial;
@property BOOL carPlaySupported;
@property BOOL oobPairing2Supported;
@property (retain, nonatomic) NSString *currentOOBBTPairingUID;
@property (retain, nonatomic) NSData *currentRemoteMACAddress;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;

@end
