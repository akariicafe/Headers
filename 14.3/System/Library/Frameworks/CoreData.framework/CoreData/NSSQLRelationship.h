@class NSString, NSSQLEntity;

@interface NSSQLRelationship : NSSQLProperty {
    NSString *_name;
    NSSQLEntity *_destinationEntity;
    NSSQLRelationship *_inverse;
}

- (id)destinationEntity;
- (id)inverseRelationship;
- (id)correlationTableName;
- (id)sourceEntity;
- (void)_setName:(id)a0;
- (void)_setForeignOrderKey:(id)a0;
- (id)foreignKey;
- (BOOL)isOrdered;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (void)_setInverseRelationship:(id)a0;
- (id)initForReadOnlyFetchWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)relationshipDescription;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (void)dealloc;
- (id)name;

@end
