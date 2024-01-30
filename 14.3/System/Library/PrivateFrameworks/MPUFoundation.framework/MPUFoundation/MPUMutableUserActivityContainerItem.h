@class MPMediaEntity;

@interface MPUMutableUserActivityContainerItem : MPUUserActivityContainerItem

@property (nonatomic) long long containerItemType;
@property (retain, nonatomic) MPMediaEntity *selectedMediaEntity;
@property (retain, nonatomic) MPMediaEntity *visualReferenceMediaEntity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setContainerItemType:(long long)a0;
- (void)setSelectedMediaEntity:(id)a0;
- (void)setVisualReferenceMediaEntity:(id)a0;

@end
