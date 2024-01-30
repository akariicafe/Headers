@interface CMPedometerBin : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double valueOut;
@property (readonly, nonatomic) double begin;
@property (readonly, nonatomic) double lowerQuartile;
@property (readonly, nonatomic) double center;
@property (readonly, nonatomic) double upperQuartile;
@property (readonly, nonatomic) double end;
@property (readonly, nonatomic) long long state;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithValueOut:(double)a0 begin:(double)a1 end:(double)a2 state:(long long)a3;
- (void)encodeWithCoder:(id)a0;

@end
