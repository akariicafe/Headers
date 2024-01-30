@class NSString;
@protocol PLResourceDataStore, PLAssetID, PLResourceDataStoreKey;

@interface PHLocallyAvailableResourceBag : NSObject <PHRecyclableObject, NSCopying>

@property (retain, nonatomic) id<PLAssetID> assetID;
@property (retain, nonatomic) id<PLResourceDataStore> dataStore;
@property (retain, nonatomic) id<PLResourceDataStoreKey> dataStoreKey;
@property (nonatomic) BOOL keyIsHintBased;
@property (nonatomic) BOOL isDegraded;
@property (nonatomic) BOOL isPrimaryFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resourceURL;
- (id)resourceData;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)prepareForReuse;

@end
