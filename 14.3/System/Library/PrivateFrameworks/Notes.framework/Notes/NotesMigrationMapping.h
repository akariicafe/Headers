@class NSArray, NSString, NSManagedObjectModel;

@interface NotesMigrationMapping : NSObject

@property (copy) NSArray *sourceModels;
@property (copy) NSString *descriptionString;
@property (retain) NSManagedObjectModel *destinationModel;
@property long long type;

+ (id)inferredMappingFromSourceModelNames:(id)a0 toDestinationModelName:(id)a1;
+ (id)modelForModelName:(id)a0;
+ (id)customMappingFromSourceModelName:(id)a0 toDestinationModelName:(id)a1;
+ (id)descriptionStringFromSourceStoreNames:(id)a0 destinationStoreName:(id)a1;
+ (id)mappings;

- (void).cxx_destruct;
- (BOOL)canMigrateStoreMetadata:(id)a0;
- (id)sourceModelForStoreMetadata:(id)a0;
- (id)mappingModelForStoreMetadata:(id)a0;
- (id)description;

@end
