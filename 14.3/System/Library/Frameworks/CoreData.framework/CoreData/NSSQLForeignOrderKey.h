@class NSString, NSSQLForeignKey;

@interface NSSQLForeignOrderKey : NSSQLColumn {
    NSString *_name;
    NSSQLForeignKey *_foreignKey;
}

- (void)_setName:(id)a0;
- (id)foreignKey;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)initWithEntity:(id)a0 foreignKey:(id)a1;
- (void)dealloc;
- (id)toOneRelationship;
- (void)setFKForReadOnlyFetch:(id)a0;
- (id)name;
- (id)initForReadOnlyFetchingOfEntity:(id)a0 toOneRelationship:(id)a1;

@end
