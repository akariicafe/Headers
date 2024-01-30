@class NSString, NSSQLEntity;

@interface NSSQLRelationship : NSSQLProperty {
    NSString *_name;
    NSSQLEntity *_destinationEntity;
    NSSQLRelationship *_inverse;
}

- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)sourceEntity;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)initForReadOnlyFetchWithEntity:(id)a0 propertyDescription:(id)a1;
- (void)_setForeignOrderKey:(id)a0;
- (id)destinationEntity;
- (id)foreignKey;
- (id)correlationTableName;
- (id)name;
- (void)dealloc;

@end
