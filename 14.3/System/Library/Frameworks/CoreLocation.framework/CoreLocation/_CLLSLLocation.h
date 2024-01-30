@class _CLLSLLocationCoordinate;

@interface _CLLSLLocation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) _CLLSLLocationCoordinate *coordinate;
@property (nonatomic) double altitude;
@property (nonatomic) double timestamp;

- (id)initWithCoordinate:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithLatitude:(double)a0 longitude:(double)a1;
- (id)descriptionWithMemberIndent:(id)a0 endIndent:(id)a1;
- (id)initWithCoordinate:(id)a0 altitude:(double)a1 timetamp:(double)a2;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 altitude:(double)a2 timetamp:(double)a3;
- (void)encodeWithCoder:(id)a0;

@end
