@class PLPerson, NSString, PLAdditionalAssetAttributes, NSData;

@interface PLPersonReference : PLManagedObject

@property (retain, nonatomic) NSString *personUUID;
@property (retain, nonatomic) NSData *personData;
@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;
@property (retain, nonatomic) PLPerson *person;

+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)a0 personUUID:(id)a1 personData:(id)a2;

@end
