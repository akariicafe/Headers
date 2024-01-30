@class ADSInternalSize, ADSInternalPoint;

@interface ADSInternalRect : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) ADSInternalPoint *origin;
@property (copy, nonatomic) ADSInternalSize *size;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithX:(float)a0 Y:(float)a1 width:(float)a2 height:(float)a3;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
