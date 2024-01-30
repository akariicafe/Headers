@class NSObject;
@protocol NSSecureCoding, NSCopying;

@interface PVTimedObject : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (retain, nonatomic) NSObject<NSSecureCoding, NSCopying> *object;

+ (id)findTimedObjectInSortedArray:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 returnFirstObjectForTimeBeforeFirst:(BOOL)a2 returnLastObjectForTimeAfterLast:(BOOL)a3;
+ (id)timedObjectWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 object:(id)a1;
+ (id)timedObjectWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 object:(id)a1;

@end
