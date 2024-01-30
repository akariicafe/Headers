@class NSString;

@interface DMFAppManagementInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSString *redemptionCode;
@property (copy, nonatomic) NSString *unusedRedemptionCode;

+ (id)stringForState:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_stringForOptions:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
