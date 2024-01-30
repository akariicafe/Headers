@class NSDictionary;

@interface LNBundleActionsMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *actions;
@property (readonly, nonatomic) NSDictionary *systemProtocolDefaults;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithActions:(id)a0 systemProtocolDefaults:(id)a1;

@end
