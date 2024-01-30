@class NSManagedObjectModel, NSArray, NSDictionary;

@interface _PFModelMap : NSObject {
    NSArray *_models;
    id *_indexedEntities;
    unsigned long long _entityCount;
    unsigned long long *_modelEntityCounts;
}

@property (readonly, nonatomic) NSManagedObjectModel *clientModel;
@property (readonly, nonatomic) NSArray *allEntities;
@property (readonly, nonatomic) NSDictionary *entitiesByPath;
@property (readonly, nonatomic) unsigned long long clientEntityCount;

+ (id)ancillaryModelFactoryClasses;

- (void)dealloc;

@end
