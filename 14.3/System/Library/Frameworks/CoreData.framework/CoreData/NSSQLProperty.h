@class NSSQLEntity, NSPropertyDescription;

@interface NSSQLProperty : NSObject {
    NSPropertyDescription *_propertyDescription;
    NSSQLEntity *_entity;
    unsigned char _propertyType;
    unsigned char _sqlType;
    unsigned short _fetchIndex;
    unsigned short _slot;
    struct _sqlColumnFlags { unsigned char _allowAliasing : 1; unsigned char _unique : 1; unsigned char _constrained : 1; unsigned char _backedByTrigger : 1; unsigned char _isDerivedAttribute : 1; unsigned short _reservedFlags : 11; } _flags;
}

@property (nonatomic, getter=isConstrained) BOOL constrained;

- (unsigned int)slot;
- (id)columnName;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)externalName;
- (BOOL)isPrimaryKey;
- (BOOL)isColumn;
- (void)dealloc;
- (BOOL)isRelationship;
- (void)setEntityForReadOnlyFetch:(id)a0;
- (BOOL)isForeignKey;
- (BOOL)isForeignEntityKey;
- (BOOL)isToOne;
- (BOOL)isEntityKey;
- (BOOL)isOptLockKey;
- (BOOL)isForeignOrderKey;
- (id)propertyDescription;
- (id)entity;
- (id)description;
- (void)setPropertyDescription:(id)a0;
- (unsigned char)sqlType;
- (unsigned char)propertyType;
- (BOOL)isToMany;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (BOOL)isManyToMany;
- (BOOL)isAttribute;
- (BOOL)isUnique;

@end
