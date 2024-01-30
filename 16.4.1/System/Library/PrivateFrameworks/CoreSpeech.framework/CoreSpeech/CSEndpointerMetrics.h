@class NSArray, NSDictionary;

@interface CSEndpointerMetrics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double totalAudioRecorded;
@property (nonatomic) unsigned long long endpointBufferHostTime;
@property (retain, nonatomic) NSArray *featuresAtEndpoint;
@property (nonatomic) long long endpointerType;
@property (retain, nonatomic) NSDictionary *serverFeatureLatencyDistribution;
@property (retain, nonatomic) NSDictionary *additionalMetrics;
@property (nonatomic) double trailingSilenceDurationAtEndpoint;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTotalAudioRecorded:(double)a0 endpointBufferHostTime:(unsigned long long)a1 featuresAtEndpoint:(id)a2 endpointerType:(long long)a3 serverFeatureLatencyDistribution:(id)a4 additionalMetrics:(id)a5 trailingSilenceDurationAtEndpoint:(double)a6;

@end
