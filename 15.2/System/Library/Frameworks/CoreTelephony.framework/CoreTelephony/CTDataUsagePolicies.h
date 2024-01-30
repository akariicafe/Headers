@class NSString;

@interface CTDataUsagePolicies : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) long long cellular;
@property (nonatomic) long long wifi;

- (id)init:(id)a0 withCellularPolicy:(long long)a1 andWifiPolicy:(long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
