@class NSNumber, BRAsset;

@interface BRSlotData : NSObject

@property (copy, nonatomic) NSNumber *slot;
@property (retain, nonatomic) BRAsset *asset;
@property (nonatomic) BOOL isProgrammed;
@property (nonatomic) unsigned long long refCount;
@property (readonly, nonatomic) id propertyList;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithSlotData:(id)a0;

@end
