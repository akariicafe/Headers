@class NSDictionary;

@interface ProviderConfiguration : NSObject {
    NSDictionary *_configuration;
}

@property (nonatomic) BOOL providerOff;
@property (readonly, nonatomic) BOOL socialEngineeringThreatTypeOff;
@property (readonly, nonatomic) BOOL malwareThreatTypeOff;
@property (readonly, nonatomic) BOOL unwantedSoftwareThreatTypeOff;
@property (readonly, nonatomic) BOOL proxyOff;

- (id)init;
- (BOOL)isEqualToConfiguration:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_configureToBeOff;
- (void)_configureToUseDefaultValues;
- (id)_currentRegionCode;
- (void)_parseConfiguration:(id)a0;

@end
