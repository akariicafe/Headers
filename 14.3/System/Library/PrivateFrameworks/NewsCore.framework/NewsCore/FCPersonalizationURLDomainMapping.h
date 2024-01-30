@class NSDictionary;

@interface FCPersonalizationURLDomainMapping : NSObject

@property (nonatomic) double averageSafariVisitsPerDay;
@property (retain, nonatomic) NSDictionary *paths;

- (void).cxx_destruct;
- (id)initWithPBURLMappingDomain:(id)a0;
- (id)tagsForPath:(id)a0;

@end
