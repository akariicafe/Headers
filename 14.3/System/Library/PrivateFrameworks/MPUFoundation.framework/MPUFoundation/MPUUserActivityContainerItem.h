@class MPUContentItemIdentifierCollection, _MPUProtoBufUserActivityContainerItem, MPMediaEntity;

@interface MPUUserActivityContainerItem : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) MPUContentItemIdentifierCollection *MPU_selectedContentItemIdentifierCollection;
@property (readonly, nonatomic) MPUContentItemIdentifierCollection *MPU_visualReferenceContentItemIdentifierCollection;
@property (readonly, nonatomic) _MPUProtoBufUserActivityContainerItem *protoBufUserActivityContainerItem;
@property (readonly, nonatomic) long long containerItemType;
@property (readonly, nonatomic) MPMediaEntity *selectedMediaEntity;
@property (readonly, nonatomic) MPMediaEntity *visualReferenceMediaEntity;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithContainerItemType:(long long)a0;
- (id)initWithProtoBufUserActivityContainerItem:(id)a0;
- (id)_MPU_contentItemIdentifierCollectionWithMediaEntity:(id)a0;

@end
