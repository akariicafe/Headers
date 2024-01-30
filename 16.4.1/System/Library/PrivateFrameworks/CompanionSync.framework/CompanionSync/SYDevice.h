@class NSSet, NSString, NSUUID, NSDate, PBCodable, NRDevice;

@interface SYDevice : NSObject <NRDevicePropertyObserver, SYStateLoggable>

@property (class, readonly) NSSet *knownDevices;
@property (class, readonly) SYDevice *targetableDevice;

@property (readonly, nonatomic) NRDevice *nrDevice;
@property (nonatomic) long long state;
@property (readonly, nonatomic, getter=isTargetable) BOOL targetable;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) NSString *pairingStorePath;
@property (readonly, nonatomic) NSUUID *pairingID;
@property (readonly, nonatomic) long long deviceCode;
@property (readonly, nonatomic) NSString *deviceClass;
@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) NSString *systemBuildVersion;
@property (readonly, nonatomic) NSDate *lastActiveDate;
@property (readonly, nonatomic) BOOL supportsFileTransferMessageSend;
@property (nonatomic) BOOL hasCachedNearby;
@property (nonatomic) BOOL cachedIsNearby;
@property (nonatomic) BOOL hasCachedConnected;
@property (nonatomic) BOOL cachedConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PBCodable *stateForLogging;

+ (id)deviceForIDSDeviceID:(id)a0 fromList:(id)a1;
+ (id)deviceForNRDevice:(id)a0;
+ (id)deviceForIDSDevice:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)device:(id)a0 propertyDidChange:(id)a1 fromValue:(id)a2;
- (void).cxx_destruct;
- (id)initWithNRDevice:(id)a0;
- (void)_updateCachedStateForProperty:(id)a0;
- (void)_updateStateFlagsPostingNotifications:(BOOL)a0;
- (id)findMatchingIDSDeviceFromList:(id)a0;

@end
