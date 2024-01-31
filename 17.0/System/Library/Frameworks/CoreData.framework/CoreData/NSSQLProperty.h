@class NSSQLEntity, NSPropertyDescription;

@interface NSSQLProperty : NSObject {
    NSPropertyDescription *_propertyDescription;
    NSSQLEntity *_entity;
    unsigned char _propertyType;
    unsigned char _sqlType;
    unsigned short _fetchIndex;
    unsigned short _slot;
    struct _sqlColumnFlags { unsigned char _allowAliasing : 1; unsigned char _unique : 1; unsigned char _constrained : 1; unsigned char _backedByTrigger : 1; unsigned char _isDerivedAttribute : 1; unsigned char _isNestedColumn : 1; unsigned short _reservedFlags : 10; } _flags;
}

@property (nonatomic, getter=isConstrained) BOOL constrained;

- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)propertyDescription;
- (unsigned int)slot;
- (id)entity;
- (void)dealloc;
- (unsigned char)sqlType;
- (unsigned char)propertyType;
- (id)columnName;
- (id)description;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (BOOL)isToMany;

@end
