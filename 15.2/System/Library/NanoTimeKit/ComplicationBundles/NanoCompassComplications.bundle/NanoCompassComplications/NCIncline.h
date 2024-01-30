@interface NCIncline : NSObject <NSCopying>

@property (class, readonly, nonatomic) NCIncline *idealizedIncline;

@property (nonatomic) struct { double x; double y; double z; } gravity;
@property (nonatomic) long long orientation;
@property (nonatomic) double verticalTilt;
@property (nonatomic) struct CGPoint { double x; double y; } horizontalOffset;
@property (nonatomic) double horizontalTilt;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasReading;

+ (id)newIncline:(id)a0;
+ (id)randomizedIncline;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNCIncline:(id)a0;
- (BOOL)updateHasSignificantChange:(id)a0;

@end
