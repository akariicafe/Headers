@class NSUUID, CLSLocationOfInterest, NSDateInterval;

@interface CLSLocationOfInterestVisit : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSDateInterval *visitInterval;
@property (readonly, nonatomic) double confidence;
@property (weak, nonatomic) CLSLocationOfInterest *locationOfInterest;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithIdentifier:(id)a0 visitInterval:(id)a1 confidence:(double)a2;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
