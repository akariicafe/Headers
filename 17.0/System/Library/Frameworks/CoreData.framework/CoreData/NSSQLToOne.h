@class NSSQLForeignKey, NSSQLForeignEntityKey, NSSQLForeignOrderKey;

@interface NSSQLToOne : NSSQLRelationship {
    NSSQLForeignKey *_foreignKey;
    NSSQLForeignEntityKey *_foreignEntityKey;
    NSSQLForeignOrderKey *_foreignOrderKey;
    BOOL _isVirtual;
}

- (void)copyValuesForReadOnlyFetch:(id)a0;
- (unsigned int)slot;
- (void)dealloc;
- (id)initWithEntity:(id)a0 inverseToMany:(id)a1;
- (id)columnName;
- (id)initForReadOnlyFetchWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)description;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)foreignKey;
- (void)_setForeignOrderKey:(id)a0;

@end
