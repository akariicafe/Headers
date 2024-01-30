@interface CTDataUsage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long cellularHome;
@property (nonatomic) unsigned long long cellularRoaming;
@property (nonatomic) unsigned long long wifi;

- (void)addUsage:(id)a0;
- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHome:(unsigned long long)a0 roaming:(unsigned long long)a1 wifi:(unsigned long long)a2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
