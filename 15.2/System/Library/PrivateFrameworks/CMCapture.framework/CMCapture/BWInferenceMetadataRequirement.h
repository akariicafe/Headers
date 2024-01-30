@class NSArray;

@interface BWInferenceMetadataRequirement : BWInferenceDataRequirement <NSCopying>

@property (readonly, copy, nonatomic) NSArray *metadataKeys;
@property (readonly, nonatomic) short mappingOption;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithMetadataKeys:(id)a0 mappingOption:(short)a1;
- (id)initWithMetadataRequirement:(id)a0;
- (id)initWithMetadataKeys:(id)a0;

@end
