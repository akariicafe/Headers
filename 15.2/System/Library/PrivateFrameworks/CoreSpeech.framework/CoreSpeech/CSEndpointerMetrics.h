@class NSArray, NSDictionary;

@interface CSEndpointerMetrics : NSObject

@property (nonatomic) double totalAudioRecorded;
@property (nonatomic) unsigned long long endpointBufferHostTime;
@property (retain, nonatomic) NSArray *featuresAtEndpoint;
@property (nonatomic) long long endpointerType;
@property (retain, nonatomic) NSDictionary *serverFeatureLatencyDistribution;
@property (retain, nonatomic) NSDictionary *additionalMetrics;

- (void).cxx_destruct;
- (id)initWithTotalAudioRecorded:(double)a0 endpointBufferHostTime:(unsigned long long)a1 featuresAtEndpoint:(id)a2 endpointerType:(long long)a3 serverFeatureLatencyDistribution:(id)a4 additionalMetrics:(id)a5;

@end
