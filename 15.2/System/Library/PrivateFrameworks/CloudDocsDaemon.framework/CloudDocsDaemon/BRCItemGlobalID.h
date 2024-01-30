@class BRCItemID, BRCZoneRowID;

@interface BRCItemGlobalID : NSObject <NSCopying>

@property (readonly, nonatomic) BRCZoneRowID *zoneRowID;
@property (readonly, nonatomic) BRCItemID *itemID;

+ (id)itemGlobalIDFromLocalItem:(id)a0;

- (id)initWithZoneRowID:(id)a0 itemID:(id)a1;
- (id)description;
- (BOOL)isEqualToItemGlobalID:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
