@class NSString, NSUUID, NSData, NSNumber;

@interface HAPBLEPeripheralInfo : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long advertisedProtocolVersion;
@property (nonatomic) unsigned long long previousProtocolVersion;
@property (nonatomic) unsigned long long resumeSessionId;
@property (retain, nonatomic) NSNumber *stateNumber;
@property (retain, nonatomic) NSString *accessoryName;
@property (retain, nonatomic) NSData *broadcastKey;
@property (nonatomic) double keyUpdatedTime;
@property (retain, nonatomic) NSNumber *keyUpdatedStateNumber;
@property (readonly, nonatomic) NSUUID *peripheralUUID;
@property (readonly, nonatomic) double lastSeen;
@property (readonly, nonatomic) NSNumber *statusFlags;
@property (readonly, nonatomic) NSNumber *configNumber;
@property (readonly, nonatomic) NSNumber *categoryIdentifier;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPeripheralInfo:(id)a0 advertisedProtocolVersion:(unsigned long long)a1 previousProtocolVersion:(long long)a2 resumeSessionId:(unsigned long long)a3 lastSeen:(double)a4 statusFlags:(id)a5 stateNumber:(id)a6 configNumber:(id)a7 categoryIdentifier:(id)a8 accessoryName:(id)a9;
- (void)updateProtocolVersion:(unsigned long long)a0;
- (void)updateResumeSessionId:(unsigned long long)a0;
- (void)updateStateNumber:(id)a0;
- (void)saveBroadcastKey:(id)a0 keyUpdatedStateNumber:(id)a1 updatedTime:(double)a2;
- (void)updateBroadcastKey:(id)a0;
- (void)updateAccessoryName:(id)a0;

@end
