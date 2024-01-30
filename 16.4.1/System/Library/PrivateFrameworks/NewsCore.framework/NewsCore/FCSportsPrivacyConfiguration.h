@interface FCSportsPrivacyConfiguration : NSObject

@property (readonly, nonatomic) BOOL isHeadlineExposureTrackingDisabled;
@property (readonly, nonatomic) double syncEventSamplingRate;
@property (readonly, nonatomic) double headlineExposureNoiseRate;

- (id)initWithConfigDictionary:(id)a0;
- (id)init;

@end
