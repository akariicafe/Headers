@interface GEOArrivalTimeInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long legIndex;
@property (nonatomic) double remainingTime;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLegIndex:(unsigned long long)a0 remainingTime:(double)a1;

@end
