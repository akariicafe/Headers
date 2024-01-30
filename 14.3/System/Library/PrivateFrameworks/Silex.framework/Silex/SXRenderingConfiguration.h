@class NSArray, SXHintsConfigurationOption;

@interface SXRenderingConfiguration : SXJSONObject

@property (readonly, nonatomic) SXHintsConfigurationOption *hints;
@property (readonly, nonatomic) NSArray *conditionKeys;

@end
