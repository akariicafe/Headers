@class MPModelObject;

@interface MPStoreLibraryPersonalizationContentDescriptor : NSObject

@property (readonly, nonatomic) MPModelObject *model;
@property (readonly, nonatomic) long long personalizationStyle;

+ (id)_lightweightPersonalizationPropertiesForStoreAsset;
+ (id)_lightweightPersonalizationPropertiesForLyrics;
+ (id)_lightweightPersonalizationPropertiesForPlaybackPosition;
+ (id)requiredLightweightPersonalizationPropertiesForModelClass:(Class)a0 requestedProperties:(id)a1;
+ (id)lightweightPersonalizationPropertiesForModelClass:(Class)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0 personalizationStyle:(long long)a1;

@end
