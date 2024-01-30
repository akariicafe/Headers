@class NSString, NSArray;

@interface HKClinicalGatewayFeature : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long minCompatibleAPIVersion;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSArray *interactions;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 minCompatibleAPIVersion:(long long)a1 status:(long long)a2 interactions:(id)a3;

@end
