@class NSArray, NSDictionary;

@interface CSEndpointerMetrics : NSObject

@property (nonatomic) double totalAudioRecorded;
@property (retain, nonatomic) NSArray *featuresAtEndpoint;
@property (nonatomic) long long endpointerType;
@property (retain, nonatomic) NSDictionary *serverFeatureLatencyDistribution;
@property (retain, nonatomic) NSDictionary *additionalMetrics;

- (void).cxx_destruct;
- (id)initWithTotalAudioRecorded:(double)a0 featuresAtEndpoint:(id)a1 endpointerType:(long long)a2 serverFeatureLatencyDistribution:(id)a3 additionalMetrics:(id)a4;

@end
