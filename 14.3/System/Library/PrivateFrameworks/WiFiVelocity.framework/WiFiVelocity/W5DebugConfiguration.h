@interface W5DebugConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long wifi;
@property (nonatomic) long long megaWiFiProfile;
@property (nonatomic) long long noLoggingWiFiProfile;
@property (nonatomic) long long eapol;
@property (nonatomic) long long bluetooth;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)conformsToProtocol:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToDebugConfiguration:(id)a0;

@end
