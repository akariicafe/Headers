@class NSSQLForeignKey, NSSQLForeignEntityKey, NSSQLForeignOrderKey;

@interface NSSQLToOne : NSSQLRelationship {
    NSSQLForeignKey *_foreignKey;
    NSSQLForeignEntityKey *_foreignEntityKey;
    NSSQLForeignOrderKey *_foreignOrderKey;
    BOOL _isVirtual;
}

- (unsigned int)slot;
- (id)columnName;
- (void)_setForeignOrderKey:(id)a0;
- (id)foreignKey;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)initForReadOnlyFetchWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)initWithEntity:(id)a0 inverseToMany:(id)a1;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)foreignEntityKey;
- (BOOL)isOptional;
- (void)dealloc;
- (BOOL)isVirtual;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1 virtualForToMany:(id)a2;
- (id)foreignOrderKey;
- (id)description;

@end
