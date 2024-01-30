@class GCPhysicalInputProfile, NSString, NSArray, GCMouseInput, NSObject, GCController;
@protocol OS_dispatch_queue, GCNamedProfile;

@interface GCMouse : NSObject <NSSecureCoding, GCDeviceLegacy, GCDevice>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) GCMouse *current;

@property (readonly, nonatomic) GCController *proxyController;
@property (retain, nonatomic) GCPhysicalInputProfile<GCNamedProfile> *profile;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSArray *hidServices;
@property (readonly, nonatomic) unsigned int service;
@property (retain, nonatomic) NSString *physicalDeviceUniqueID;
@property (readonly, nonatomic) unsigned long long deviceHash;
@property (copy, nonatomic) NSString *debugName;
@property (nonatomic, getter=isForwarded) BOOL forwarded;
@property (nonatomic, getter=areAllHIDDevicesConnected) BOOL allHIDDevicesConnected;
@property (nonatomic, getter=isPublished) BOOL published;
@property (readonly, nonatomic) NSString *productCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) GCController *proxyController;
@property (readonly, nonatomic) GCMouseInput *mouseInput;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly, copy, nonatomic) NSString *vendorName;
@property (readonly, nonatomic) NSString *productCategory;
@property (readonly, nonatomic) GCPhysicalInputProfile *physicalInputProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mice;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)handleEvent:(struct __IOHIDEvent { } *)a0;
- (void)setVendorName:(id)a0;
- (unsigned int)sampleRate;
- (void).cxx_destruct;
- (void)clearServiceRef;
- (id)_legacy_description;
- (BOOL)_legacy_isAttachedToDevice;
- (BOOL)_legacy_isEqualToController:(id)a0;
- (id)_legacy_physicalInputProfile;
- (id)_legacy_physicalInputProfileName;
- (long long)_legacy_playerIndex;
- (id)_legacy_productCategory;
- (void)_legacy_setPlayerIndex:(long long)a0;
- (id)_legacy_vendorName;
- (void)addServiceRef:(id)a0;
- (void)addServiceRefsWithDevice:(id)a0;
- (void *)createInputBufferForDevice:(struct __IOHIDDevice { } *)a0 withSize:(unsigned long long)a1;
- (BOOL)hasServiceRef:(struct __IOHIDServiceClient { } *)a0;
- (id)initWithServiceRef:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)isATVRemote;
- (void)removeServiceRef:(struct __IOHIDServiceClient { } *)a0;

@end
