@class NSString, NSSQLEntity;

@interface NSSQLRelationship : NSSQLProperty {
    NSString *_name;
    NSSQLEntity *_destinationEntity;
    NSSQLRelationship *_inverse;
}

- (void)copyValuesForReadOnlyFetch:(id)a0;
- (void)dealloc;
- (id)initForReadOnlyFetchWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)correlationTableName;
- (id)destinationEntity;
- (id)sourceEntity;
- (id)name;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)foreignKey;
- (void)_setForeignOrderKey:(id)a0;

@end
