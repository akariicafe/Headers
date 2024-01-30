@class NSDate;

@interface _PSClusterPoint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL timestampExists;
@property (readonly, nonatomic) NSDate *timestamp;
@property (nonatomic) double x;
@property (nonatomic) double y;

- (id)initWithDate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithX:(double)a0 Y:(double)a1;
- (double)distanceToHull:(id)a0;
- (double)euclideanDistanceToPoint:(id)a0;
- (int)findSideOfLineFormedByStart:(id)a0 End:(id)a1;
- (double)distanceToLineFormedByStart:(id)a0 End:(id)a1;
- (BOOL)inConvexHull:(id)a0;

@end
