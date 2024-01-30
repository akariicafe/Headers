@class NSString;

@interface MGAudioReceiverAccessory : MGSoloDevice <MGHomeKitAccessoryProtocol, MGAdvertisementInfoProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)type;
+ (void)audioReceiverAccessoryWithConnectionProvider:(id)a0 HomeKitAccessory:(id)a1 completion:(id /* block */)a2;
+ (void)audioReceiverAccessoryWithHomeKitAccessory:(id)a0 completion:(id /* block */)a1;

- (id)deviceIdentifier;
- (id)HomeKitAccesoryIdentifier;
- (id)HomeKitAccessoryWithHomeManager:(id)a0;

@end
