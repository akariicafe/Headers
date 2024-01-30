@class NSString;

@interface WLKAppSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) unsigned long long accessStatus;
@property (readonly, nonatomic) NSString *externalID;
@property (nonatomic) BOOL obsolete;

+ (BOOL)isExternalID:(id)a0 equalToExternalID:(id)a1;

- (id)JSONDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithChannelID:(id)a0 accessStatus:(unsigned long long)a1 displayName:(id)a2 externalID:(id)a3;
- (id)description;
- (id)_statusStrings;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToAppSettings:(id)a0;

@end
