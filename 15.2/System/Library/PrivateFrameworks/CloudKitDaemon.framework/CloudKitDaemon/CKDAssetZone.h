@class CKDAssetZoneKey, NSMutableDictionary, NSMutableOrderedSet;

@interface CKDAssetZone : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *assetRecords;
@property (retain, nonatomic) NSMutableDictionary *assetRecordsByRecordID;
@property (retain, nonatomic) CKDAssetZoneKey *assetZoneKey;

- (void)addRereferencedMMCSItem:(id)a0;
- (id)CKPropertiesDescription;
- (id)description;
- (void)addMMCSItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithAssetZoneKey:(id)a0;
- (void)addMMCSSectionItem:(id)a0;

@end
