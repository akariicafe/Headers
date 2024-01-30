@interface CLRouteBoundingBox : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double minLatitude;
@property (readonly, nonatomic) double maxLatitude;
@property (readonly, nonatomic) double minLongitude;
@property (readonly, nonatomic) double maxLongitude;
@property (readonly, nonatomic) int nRows;
@property (readonly, nonatomic) int nColumns;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMinLatitude:(double)a0 maxLatitude:(double)a1 minLongitude:(double)a2 maxLongitude:(double)a3 nRows:(int)a4 nColumns:(int)a5;

@end
