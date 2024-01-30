@class NSString, NSDictionary, VSAuditToken;

@interface VSStoreRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *methodName;
@property (copy, nonatomic) NSString *bagKey;
@property (copy, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) VSAuditToken *auditToken;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
