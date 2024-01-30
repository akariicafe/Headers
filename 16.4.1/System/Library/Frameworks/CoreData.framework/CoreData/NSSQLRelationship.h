@class NSString, NSSQLEntity;

@interface NSSQLRelationship : NSSQLProperty {
    NSString *_name;
    NSSQLEntity *_destinationEntity;
    NSSQLRelationship *_inverse;
}

- (void)copyValuesForReadOnlyFetch:(id)a0;
- (void)_setForeignOrderKey:(id)a0;
- (id)destinationEntity;
- (id)foreignKey;
- (id)sourceEntity;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (void)dealloc;
- (id)correlationTableName;
- (id)initForReadOnlyFetchWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)name;

@end
