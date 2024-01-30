@class NSDictionary;

@interface ProviderConfiguration : NSObject {
    NSDictionary *_configuration;
}

@property (nonatomic) BOOL providerOff;
@property (readonly, nonatomic) BOOL socialEngineeringThreatTypeOff;
@property (readonly, nonatomic) BOOL malwareThreatTypeOff;
@property (readonly, nonatomic) BOOL unwantedSoftwareThreatTypeOff;
@property (readonly, nonatomic) BOOL proxyOff;

- (BOOL)isEqualToConfiguration:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)_parseConfiguration:(id)a0;
- (void)_configureToBeOff;
- (id)_currentRegionCode;
- (void)_configureToUseDefaultValues;
- (void).cxx_destruct;
- (id)init;

@end
