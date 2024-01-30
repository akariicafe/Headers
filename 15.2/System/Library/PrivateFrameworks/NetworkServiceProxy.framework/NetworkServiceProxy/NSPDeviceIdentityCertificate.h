@class NSDate;

@interface NSPDeviceIdentityCertificate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long diskVersion;
@property (nonatomic) BOOL ignoreExistingKeychainIdentity;
@property (retain, nonatomic) NSDate *deviceIdentityFetchDate;

+ (void)removeFromPreferences;
+ (id)sharedDeviceIdentity;
+ (BOOL)deviceSupportsDeviceIdentityWithSerialNumber;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initFromPreferences;
- (void)resetDeviceIdentityInfo;
- (id)description;
- (void)fetchDeviceIdentityCertificate:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)saveToPreferences;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)deviceIdentityAuthenticationFailed;
- (void)generateDeviceIdentityFetchDate;

@end
