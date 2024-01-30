@class NSArray;

@interface HMIConfidence : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *levelThresholds;
@property (readonly) long long level;
@property (readonly) double value;

- (void).cxx_destruct;
- (id)shortDescription;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithValue:(double)a0 levelThresholds:(id)a1;

@end
