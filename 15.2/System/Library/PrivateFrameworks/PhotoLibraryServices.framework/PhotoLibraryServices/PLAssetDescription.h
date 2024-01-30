@class NSString, PLAdditionalAssetAttributes;

@interface PLAssetDescription : PLManagedObject

@property (retain, nonatomic) NSString *longDescription;
@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;

+ (id)entityName;
+ (id)listOfSyncedProperties;

- (id)payloadID;
- (void)prepareForDeletion;
- (id)payloadForChangedKeys:(id)a0;
- (void)willSave;
- (BOOL)isSyncableChange;

@end
