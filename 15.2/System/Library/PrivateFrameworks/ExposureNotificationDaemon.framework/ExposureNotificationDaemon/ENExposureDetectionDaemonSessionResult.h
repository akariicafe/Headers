@class NSData, ENExposureDetectionSummary, ENExposureDetectionDaemonSessionStatistics, ENExposureClassification, ENRegion;

@interface ENExposureDetectionDaemonSessionResult : NSObject

@property (copy, nonatomic) ENExposureDetectionDaemonSessionStatistics *statistics;
@property (retain, nonatomic) ENExposureDetectionSummary *summary;
@property (copy, nonatomic) ENRegion *region;
@property (retain, nonatomic) ENExposureClassification *exposureClassification;
@property (nonatomic) long long exposureClassificationStatus;
@property (copy, nonatomic) NSData *differentialPrivacyRiskParameters;
@property (copy, nonatomic) NSData *differentialPrivacyBeaconCount;

- (void).cxx_destruct;

@end
