@class NSSQLForeignKey, NSSQLForeignEntityKey, NSSQLForeignOrderKey;

@interface NSSQLToOne : NSSQLRelationship {
    NSSQLForeignKey *_foreignKey;
    NSSQLForeignEntityKey *_foreignEntityKey;
    NSSQLForeignOrderKey *_foreignOrderKey;
    BOOL _isVirtual;
}

- (void)copyValuesForReadOnlyFetch:(id)a0;
- (void)_setForeignOrderKey:(id)a0;
- (id)foreignKey;
- (id)initWithEntity:(id)a0 inverseToMany:(id)a1;
- (id)columnName;
- (unsigned int)slot;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (void)dealloc;
- (id)description;
- (id)initForReadOnlyFetchWithEntity:(id)a0 propertyDescription:(id)a1;

@end
