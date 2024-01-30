@class NSString, NSArray;

@interface HKClinicalGatewayEndpointSchemaParameter : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *param;
@property (readonly, copy, nonatomic) NSString *literal;
@property (readonly, copy, nonatomic) NSString *variable;
@property (readonly, copy, nonatomic) NSArray *mode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithParam:(id)a0 literal:(id)a1 variable:(id)a2 mode:(id)a3;

@end
