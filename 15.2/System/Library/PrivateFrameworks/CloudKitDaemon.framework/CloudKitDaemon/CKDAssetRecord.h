@class NSMutableDictionary, NSString, CKRecordID, NSArray, NSNumber;

@interface CKDAssetRecord : NSObject

@property (retain, nonatomic) NSMutableDictionary *itemsByRecordKey;
@property (retain, nonatomic) NSMutableDictionary *rereferencedItemsByRecordKey;
@property (retain, nonatomic) NSMutableDictionary *sectionItemsByRecordKey;
@property (retain, nonatomic) NSNumber *sizeUpperBoundNumber;
@property (retain, nonatomic) NSNumber *rerefSizeUpperBoundNumber;
@property (readonly, nonatomic) NSString *recordType;
@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly) unsigned int sizeUpperBound;
@property (readonly) unsigned int rerefSizeUpperBound;
@property (readonly, nonatomic) NSArray *allMMCSItems;
@property (readonly, nonatomic) NSArray *allMMCSSectionItems;

- (void)addRereferencedMMCSItem:(id)a0;
- (id)allRegularAndSectionAndRereferenceItemsWithRecordKey:(id)a0;
- (BOOL)isPackageSectionRecord;
- (BOOL)isEmptyOfRereferencesAssets;
- (id)CKPropertiesDescription;
- (id)allMMCSAndSectionItems;
- (id)initWithRecordType:(id)a0 recordID:(id)a1;
- (id)description;
- (void)addMMCSItem:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)allRecordKeys;
- (BOOL)isAssetRecord;
- (id)firstMMCSSectionItemError;
- (id)allRegularAndSectionAndRereferenceItems;
- (id)firstMMCSItemError;
- (id)allRereferenceMMCSItems;
- (void)addMMCSSectionItem:(id)a0;

@end
