@class NSString, NSData, NSDictionary;

@interface PLAssetJournalEntryPayloadResource : NSObject

@property (readonly, nonatomic) unsigned long long cplType;
@property (readonly, nonatomic) unsigned int dataStoreClassID;
@property (readonly, nonatomic) unsigned int resourceType;
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) unsigned int recipeID;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, nonatomic) NSString *volumeUuidString;
@property (readonly, nonatomic) NSData *bookmarkData;
@property (readonly, nonatomic) NSString *bookmarkPath;
@property (readonly, nonatomic) NSDictionary *payloadAttributes;

+ (void)_applyLargeVideoRecipeRefactorFixToExternalResource:(id)a0 withAsset:(id)a1;

- (short)trashedState;
- (void).cxx_destruct;
- (id)fourCharCodeName;
- (id)description;
- (BOOL)isAdjusted;
- (BOOL)isValidForRebuild;
- (id)initWithPayloadAttributes:(id)a0;
- (id)validatedExternalResourceWithAsset:(id)a0 isCPLEnabled:(BOOL)a1;
- (void)updateStoredResource:(id)a0;
- (BOOL)isOriginalResource;
- (BOOL)isReferenceResource;

@end
