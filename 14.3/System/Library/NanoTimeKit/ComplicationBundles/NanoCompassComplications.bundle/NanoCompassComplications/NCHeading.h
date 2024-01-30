@interface NCHeading : NSObject

@property (class, readonly, nonatomic) NCHeading *idealizedHeading;

@property (nonatomic) double heading;
@property (nonatomic) double accuracy;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasReading;
@property (readonly, nonatomic) BOOL isAccurate;

+ (id)randomizedHeading;
+ (id)newHeading:(id)a0;

- (BOOL)isEqual:(id)a0;
- (BOOL)updateHasSignificantChange:(id)a0;

@end
