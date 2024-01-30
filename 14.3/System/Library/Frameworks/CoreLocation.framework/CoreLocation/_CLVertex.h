@interface _CLVertex : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;

- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (double)getDistanceFrom:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)encodeWithCoder:(id)a0;

@end
