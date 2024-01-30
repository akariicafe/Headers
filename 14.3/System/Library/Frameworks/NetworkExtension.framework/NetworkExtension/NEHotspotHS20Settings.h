@class NSString, NSArray;

@interface NEHotspotHS20Settings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *domainName;
@property (getter=isRoamingEnabled) BOOL roamingEnabled;
@property (copy) NSArray *roamingConsortiumOIs;
@property (copy) NSArray *naiRealmNames;
@property (copy) NSArray *MCCAndMNCs;

- (void).cxx_destruct;
- (id)initWithDomainName:(id)a0 roamingEnabled:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
