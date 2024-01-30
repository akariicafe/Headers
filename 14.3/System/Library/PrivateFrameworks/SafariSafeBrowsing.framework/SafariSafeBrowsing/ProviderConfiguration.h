@class NSDictionary;

@interface ProviderConfiguration : NSObject {
    NSDictionary *_configuration;
}

@property (nonatomic) BOOL providerOff;
@property (readonly, nonatomic) BOOL socialEngineeringThreatTypeOff;
@property (readonly, nonatomic) BOOL malwareThreatTypeOff;
@property (readonly, nonatomic) BOOL unwantedSoftwareThreatTypeOff;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualToConfiguration:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)_configureToBeOff;
- (void)_parseConfiguration:(id)a0;
- (void)_configureToUseDefaultValues;
- (id)_currentRegionCode;

@end
