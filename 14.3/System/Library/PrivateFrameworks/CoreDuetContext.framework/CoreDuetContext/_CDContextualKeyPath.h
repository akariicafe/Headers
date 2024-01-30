@class NSString;

@interface _CDContextualKeyPath : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) BOOL isUserCentric;
@property (nonatomic) BOOL isEphemeral;
@property (nonatomic) BOOL sensitiveContents;

+ (id)remotekeyPathForKeyPath:(id)a0 forDevice:(unsigned long long)a1;
+ (id)keyPathWithKey:(id)a0;
+ (id)ephemeralKeyPathWithKey:(id)a0;
+ (id)remoteKeyPathForKeyPath:(id)a0 forDeviceID:(id)a1;
+ (id)keyPathWithKey:(id)a0 isUserCentric:(BOOL)a1;

- (id)init;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isMultiDeviceKeyPath;
- (id)initWithKey:(id)a0 forDevice:(unsigned long long)a1 isUserCentric:(BOOL)a2 isEphemeral:(BOOL)a3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithKey:(id)a0 forDeviceID:(id)a1 isUserCentric:(BOOL)a2 isEphemeral:(BOOL)a3;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
