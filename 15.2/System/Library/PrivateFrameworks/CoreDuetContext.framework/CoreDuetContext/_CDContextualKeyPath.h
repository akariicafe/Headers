@class NSString;

@interface _CDContextualKeyPath : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) BOOL isUserCentric;
@property (nonatomic) BOOL isEphemeral;
@property (nonatomic) BOOL sensitiveContents;

+ (id)remotekeyPathForKeyPath:(id)a0 forDevice:(unsigned long long)a1;
+ (id)remoteKeyPathForKeyPath:(id)a0 forDeviceID:(id)a1;
+ (id)ephemeralKeyPathWithKey:(id)a0;
+ (id)keyPathWithKey:(id)a0;
+ (id)keyPathWithKey:(id)a0 isUserCentric:(BOOL)a1;

- (void)encodeWithCoder:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithKey:(id)a0 forDevice:(unsigned long long)a1 isUserCentric:(BOOL)a2 isEphemeral:(BOOL)a3;
- (id)initWithKey:(id)a0 forDeviceID:(id)a1 isUserCentric:(BOOL)a2 isEphemeral:(BOOL)a3;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isMultiDeviceKeyPath;

@end
