@interface PGMomentFeatureSpecificationFactory : NSObject

+ (id)allSupportedFeatureTypes;
+ (id)specificationsForFeatureType:(unsigned long long)a0;
+ (id)_trendsSpecifications;
+ (id)_petSpecification;
+ (id)_babySpecification;
+ (id)_beachROISpecification;
+ (id)_urbanROISpecification;
+ (id)_waterROISpecification;
+ (id)_mountainROISpecification;
+ (id)_natureROISpecification;
+ (id)defaultPeopleAssetFilter;
+ (id)_peopleSpecification;
+ (id)_socialGroupSpecification;
+ (id)_petPersonSpecification;
+ (id)_excitementAudioSpecification;
+ (id)_foodSpecification;

@end
