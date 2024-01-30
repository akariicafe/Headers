@class NSString, NSSet;

@interface HDHealthOntologyCountryConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy, nonatomic) NSSet *supportedCodingSystems;
@property (readonly, nonatomic) unsigned long long analyticsOptions;

- (void).cxx_destruct;
- (id)initWithCountryCode:(id)a0 supportedCodingSystems:(id)a1 analyticsOptions:(unsigned long long)a2;

@end
