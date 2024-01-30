@class CKDAssetTokenRequest, NSArray, NSDictionary, NSData, NSMutableArray, CKDAssetZone;

@interface CKDAssetBatch : NSObject

@property (retain, nonatomic) NSMutableArray *assetRecords;
@property (retain, nonatomic) CKDAssetZone *assetZone;
@property (retain, nonatomic) NSData *authPutRequest;
@property (retain, nonatomic) NSData *authPutResponse;
@property (retain, nonatomic) NSDictionary *authPutResponseHeaders;
@property (nonatomic) BOOL isFailed;
@property (weak, nonatomic) CKDAssetTokenRequest *assetTokenRequest;
@property (readonly) unsigned int sizeUpperBound;
@property (readonly) unsigned int size;
@property (readonly, nonatomic) NSArray *allMMCSItems;
@property (readonly, nonatomic) NSArray *allMMCSSectionItems;
@property (readonly, nonatomic) NSArray *allRereferenceMMCSItems;
@property (nonatomic) BOOL useMMCSEncryptionV2;
@property (readonly, nonatomic) NSArray *allRegularAndSectionAndRereferenceItems;

- (void)addAssetRecord:(id)a0;
- (BOOL)isPackageSectionBatch;
- (void)failIfNotDoneAllRegularAndSectionAndRereferenceItemsWithError:(id)a0;
- (id)initWithAssetZone:(id)a0;
- (id)CKPropertiesDescription;
- (BOOL)isEmptyOfAssets;
- (id)allMMCSAndSectionItems;
- (id)description;
- (BOOL)isEmptyOfRereferencesAssets;
- (void).cxx_destruct;
- (id)firstMMCSItemError;
- (BOOL)isRereferenceAssetBatch;

@end
