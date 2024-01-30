@class NSArray, NSDictionary;

@interface HDHealthOntologyConfiguration : NSObject {
    NSDictionary *_countryConfigurations;
}

@property (readonly, copy, nonatomic) NSArray *allCountryConfigurations;

+ (id)bundledHealthOntologyConfiguration;

- (void).cxx_destruct;
- (id)init;
- (id)configurationForCountryCode:(id)a0;
- (id)initWithCountryConfigurations:(id)a0;

@end
