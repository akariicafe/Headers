@class NSData;

@interface AWDLServiceDiscoveryConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *serviceKey;
@property (readonly, nonatomic) NSData *serviceValue;
@property (readonly, nonatomic) BOOL isResolve;

- (id)initWithKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithKey:(id)a0 value:(id)a1 resolve:(BOOL)a2;
- (id)description;
- (void).cxx_destruct;

@end
