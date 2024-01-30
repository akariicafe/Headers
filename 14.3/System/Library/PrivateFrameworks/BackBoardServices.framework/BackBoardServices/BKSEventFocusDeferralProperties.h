@class NSString;

@interface BKSEventFocusDeferralProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *clientID;
@property (readonly, nonatomic) int pid;
@property (readonly, copy, nonatomic) NSString *displayUUID;
@property (readonly, nonatomic) unsigned int contextID;

+ (id)propertiesWithMainDisplayAndClientID:(id)a0 pid:(int)a1 contextID:(unsigned int)a2;
+ (id)propertiesWithClientID:(id)a0 pid:(int)a1 displayUUID:(id)a2 contextID:(unsigned int)a3;

- (void).cxx_destruct;
- (void)setPid:(int)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithClientID:(id)a0 pid:(int)a1 displayUUID:(id)a2 contextID:(unsigned int)a3;
- (id)conciseDescription;
- (BOOL)isEqualNotIncludingClientIDAndPid:(id)a0;
- (id)propertiesOneLevelMoreGeneric;
- (void)encodeWithCoder:(id)a0;

@end
