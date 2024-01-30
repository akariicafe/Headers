@class NSArray, AVDateRangeMetadataGroupInternal, NSDate;

@interface AVMutableDateRangeMetadataGroup : AVDateRangeMetadataGroup {
    AVDateRangeMetadataGroupInternal *_mutablePriv;
}

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSArray *items;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithTaggedRangeMetadataDictionary:(id)a0 items:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
