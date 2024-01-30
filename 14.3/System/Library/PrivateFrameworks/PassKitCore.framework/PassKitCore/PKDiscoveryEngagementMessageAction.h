@class NSString, NSDictionary;

@interface PKDiscoveryEngagementMessageAction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *titleKey;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSDictionary *actionInfo;
@property (readonly, nonatomic) NSString *localizedTitle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)localizeWithBundle:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
