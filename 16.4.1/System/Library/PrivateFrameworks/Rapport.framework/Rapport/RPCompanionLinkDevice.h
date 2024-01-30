@class NSString, NSUUID, NSDictionary;

@interface RPCompanionLinkDevice : RPEndpoint <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL changed;
@property (nonatomic) BOOL daemon;
@property (copy, nonatomic) NSString *deviceColor;
@property (nonatomic) unsigned char deviceFlags;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) NSUUID *homeKitIdentifier;
@property (copy, nonatomic) NSString *idsPersonalDeviceIdentifier;
@property (nonatomic) int listeningPort;
@property (copy, nonatomic) NSUUID *launchInstanceID;
@property (nonatomic) int mediaAccessControlSetting;
@property (copy, nonatomic) NSUUID *mediaSystemIdentifier;
@property (copy, nonatomic) NSString *mediaSystemName;
@property (copy, nonatomic) NSUUID *mediaSystemIdentifierEffective;
@property (nonatomic) int mediaSystemRole;
@property (nonatomic) int mediaSystemRoleEffective;
@property (nonatomic) int mediaSystemState;
@property (copy, nonatomic) NSUUID *pairingIdentifier;
@property (copy, nonatomic) NSString *password;
@property (nonatomic, getter=isPersonal) BOOL personal;
@property (nonatomic) int personalDeviceState;
@property (nonatomic) int personalRequestsState;
@property (copy, nonatomic) NSString *publicIdentifier;
@property (copy, nonatomic) NSString *role;
@property (copy, nonatomic) NSString *roomName;
@property (nonatomic) int serversChangedState;
@property (copy, nonatomic) NSDictionary *siriInfo;
@property (nonatomic) BOOL uiTriggered;
@property (readonly, copy, nonatomic) NSString *effectiveIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToDevice:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned int)updateWithBonjourDevice:(id)a0;
- (unsigned int)updateWithSFDevice:(id)a0;

@end
