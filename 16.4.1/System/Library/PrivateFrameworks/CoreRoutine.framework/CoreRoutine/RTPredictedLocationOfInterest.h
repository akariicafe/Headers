@class RTSource, NSArray, RTLocationOfInterest, NSDate;

@interface RTPredictedLocationOfInterest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long modeOfTransportation;
@property (readonly, nonatomic) RTLocationOfInterest *locationOfInterest;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) NSDate *nextEntryTime;
@property (readonly, nonatomic) RTSource *source;
@property (readonly, nonatomic) NSArray *sources;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)setConfidence:(double)a0;
- (void).cxx_destruct;
- (id)initWithLocationOfInterest:(id)a0 confidence:(double)a1 nextEntryTime:(id)a2 modeOfTransportation:(long long)a3 sources:(id)a4;

@end
