@class NSString;

@interface DMFAppManagementInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSString *redemptionCode;
@property (copy, nonatomic) NSString *unusedRedemptionCode;

+ (id)stringForState:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_stringForOptions:(unsigned long long)a0;

@end
