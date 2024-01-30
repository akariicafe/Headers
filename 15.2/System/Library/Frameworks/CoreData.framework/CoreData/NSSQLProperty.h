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

- (id)entity;
- (unsigned int)slot;
- (unsigned char)sqlType;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)propertyDescription;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)description;
- (id)columnName;
- (unsigned char)propertyType;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (void)dealloc;
- (BOOL)isToMany;

@end
