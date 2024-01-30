@class MPModelObject;

@interface MPStoreLibraryPersonalizationContentDescriptor : NSObject

@property (readonly, nonatomic) MPModelObject *model;
@property (readonly, nonatomic) long long personalizationStyle;

+ (id)_lightweightPersonalizationPropertiesForStoreAsset;
+ (id)_lightweightPersonalizationPropertiesForPlaybackPosition;
+ (id)lightweightPersonalizationPropertiesForModelClass:(Class)a0;

- (id)initWithModel:(id)a0 personalizationStyle:(long long)a1;
- (void).cxx_destruct;

@end
