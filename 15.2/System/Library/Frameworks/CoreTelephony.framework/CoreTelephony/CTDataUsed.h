@class CTDataUsage;

@interface CTDataUsed : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CTDataUsage *native;
@property (readonly, nonatomic) CTDataUsage *proxied;

- (void)addUsage:(id)a0;
- (void)addNativeUsage:(id)a0;
- (void)addProxiedUsage:(id)a0;
- (id)initWithUsage:(id)a0 proxied:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
