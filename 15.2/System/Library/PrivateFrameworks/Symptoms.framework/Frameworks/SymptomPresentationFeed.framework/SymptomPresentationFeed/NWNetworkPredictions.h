@class NSDate;

@interface NWNetworkPredictions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDate *changePointAt;
@property (readonly) long long toQuality;
@property (readonly) double confidence;
@property (readonly) long long resolutionSeconds;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
