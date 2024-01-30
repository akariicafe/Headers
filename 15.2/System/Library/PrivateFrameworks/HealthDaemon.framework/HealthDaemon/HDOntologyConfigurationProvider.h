@class NSSet, HDHealthOntologyConfiguration, HDProfile;

@interface HDOntologyConfigurationProvider : NSObject {
    HDHealthOntologyConfiguration *_ontologyConfiguration;
}

@property (retain, nonatomic) HDHealthOntologyConfiguration *unitTesting_ontologyConfigurationOverride;
@property (readonly, copy, nonatomic) NSSet *allSupportedCountryCodes;
@property (readonly, copy, nonatomic) NSSet *improveHealthRecordsGatedAnalyticsEnabledCountryCodes;
@property (readonly, copy, nonatomic) NSSet *optInDataCollectionEnabledCountryCodes;
@property (readonly, weak, nonatomic) HDProfile *profile;

- (BOOL)isCountryCodeSupported:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)ontologyConfigurationForCountryCode:(id)a0;
- (BOOL)isCountrySupported:(id)a0;

@end
