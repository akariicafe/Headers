@interface CTDataUsage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long cellularHome;
@property (nonatomic) unsigned long long cellularRoaming;
@property (nonatomic) unsigned long long wifi;

- (void)addUsage:(id)a0;
- (id)initWithHome:(unsigned long long)a0 roaming:(unsigned long long)a1 wifi:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
