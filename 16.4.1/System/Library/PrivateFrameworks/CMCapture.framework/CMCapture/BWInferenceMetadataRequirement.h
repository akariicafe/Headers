@class NSArray;

@interface BWInferenceMetadataRequirement : BWInferenceDataRequirement <NSCopying>

@property (readonly, copy, nonatomic) NSArray *metadataKeys;
@property (readonly, nonatomic) short mappingOption;

- (id)initWithMetadataKeys:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMetadataRequirement:(id)a0;
- (void)dealloc;
- (id)description;
- (id)initWithMetadataKeys:(id)a0 mappingOption:(short)a1;

@end
