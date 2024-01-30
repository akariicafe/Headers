@class AVDateRangeMetadataGroupInternal, NSArray, NSDate;

@interface AVDateRangeMetadataGroup : AVMetadataGroup <NSCopying, NSMutableCopying> {
    AVDateRangeMetadataGroupInternal *_priv;
}

@property (readonly, nonatomic) NSDate *discoveryTimestamp;
@property (readonly, nonatomic) NSDate *modificationTimestamp;
@property (readonly, nonatomic, getter=_dateRangeMetadataGroupInternal) AVDateRangeMetadataGroupInternal *dateRangeMetadataGroupInternal;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) NSArray *items;

+ (id)_figMetadataArrayForMetadataItems:(id)a0;
+ (id)_metadataItemsForFigMetadataArray:(id)a0;

- (id)uniqueID;
- (id)propertyList;
- (id)initWithItems:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)_taggedRangeMetadataDictionary;
- (void)_extractPropertiesFromTaggedRangeMetadataDictionary:(id)a0;
- (id)initWithPropertyList:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)classifyingLabel;
- (id)_initWithTaggedRangeMetadataDictionary:(id)a0 items:(id)a1;

@end
