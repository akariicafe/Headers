@class NSDictionary, NSArray;

@interface HDHealthOntologyConfiguration : NSObject

@property (readonly, copy, nonatomic) NSDictionary *countryConfigurations;
@property (readonly, copy, nonatomic) NSArray *allCountryConfigurations;

+ (id)bundledHealthOntologyConfiguration;

- (id)init;
- (void).cxx_destruct;
- (id)configurationForCountryCode:(id)a0;
- (id)initWithCountryConfigurations:(id)a0;

@end
