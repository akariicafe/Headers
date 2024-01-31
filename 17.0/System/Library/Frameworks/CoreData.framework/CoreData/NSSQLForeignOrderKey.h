@class NSString, NSSQLForeignKey;

@interface NSSQLForeignOrderKey : NSSQLColumn {
    NSString *_name;
    NSSQLForeignKey *_foreignKey;
}

- (void)copyValuesForReadOnlyFetch:(id)a0;
- (void)dealloc;
- (id)initForReadOnlyFetchingOfEntity:(id)a0 toOneRelationship:(id)a1;
- (id)name;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)foreignKey;
- (id)initWithEntity:(id)a0 foreignKey:(id)a1;
- (id)toOneRelationship;

@end
