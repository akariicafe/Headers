@class NSString, NSDictionary, NSData, PLJournalEntryPayload;

@interface PLAssetJournalEntryPayloadResource : NSObject {
    PLJournalEntryPayload *_payload;
}

@property (readonly, nonatomic) unsigned long long cplType;
@property (readonly, nonatomic) unsigned short dataStoreClassID;
@property (readonly, nonatomic) unsigned int resourceType;
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) unsigned int recipeID;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, nonatomic) NSString *volumeUuidString;
@property (readonly, nonatomic) NSData *bookmarkData;
@property (readonly, nonatomic) NSString *bookmarkPath;
@property (readonly, nonatomic) NSDictionary *payloadAttributes;

+ (BOOL)isValidForPersistenceWithRecipeID:(unsigned int)a0;
+ (void)_applyLargeVideoRecipeRefactorFixToExternalResource:(id)a0 withAsset:(id)a1;

- (BOOL)isValidForPersistence;
- (id)description;
- (void).cxx_destruct;
- (short)trashedState;
- (id)initWithPayloadAttributes:(id)a0 payload:(id)a1;
- (id)validatedExternalResourceWithAsset:(id)a0 isCPLEnabled:(BOOL)a1;
- (void)updateStoredResource:(id)a0;
- (void)appendToDescriptionBuilder:(id)a0;
- (BOOL)isEqualToPayloadResource:(id)a0;
- (void)mergePayloadResource:(id)a0 nilAttributes:(id)a1;
- (id)fourCharCodeName;
- (BOOL)isOriginalResource;
- (BOOL)isAdjusted;
- (BOOL)isReferenceResource;

@end
