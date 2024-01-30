@class BRCItemID, BRCZoneRowID;

@interface BRCItemGlobalID : NSObject <NSCopying>

@property (readonly, nonatomic) BRCZoneRowID *zoneRowID;
@property (readonly, nonatomic) BRCItemID *itemID;

+ (id)itemGlobalIDFromLocalItem:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToItemGlobalID:(id)a0;
- (id)initWithZoneRowID:(id)a0 itemID:(id)a1;

@end
