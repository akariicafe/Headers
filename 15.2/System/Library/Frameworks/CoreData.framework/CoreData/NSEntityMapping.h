@class NSString, NSArray, NSData, NSExpression, NSDictionary, NSMutableArray;

@interface NSEntityMapping : NSObject <NSCopying, NSCoding, NSSecureCoding> {
    void *_reserved;
    void *_reserved1;
    NSDictionary *_mappingsByName;
    NSString *_name;
    unsigned long long _mappingType;
    NSString *_sourceEntityName;
    NSData *_sourceEntityVersionHash;
    NSString *_destinationEntityName;
    NSData *_destinationEntityVersionHash;
    NSExpression *_sourceExpression;
    NSDictionary *_userInfo;
    NSString *_entityMigrationPolicyClassName;
    NSMutableArray *_attributeMappings;
    NSMutableArray *_relationshipMappings;
    struct __entityMappingFlags { unsigned char _isInUse : 1; unsigned char _changeIsSchemaCompatible : 1; unsigned int _reservedEntityMapping : 30; } _entityMappingFlags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *name;
@property unsigned long long mappingType;
@property (copy) NSString *sourceEntityName;
@property (copy) NSData *sourceEntityVersionHash;
@property (copy) NSString *destinationEntityName;
@property (copy) NSData *destinationEntityVersionHash;
@property (retain) NSArray *attributeMappings;
@property (retain) NSArray *relationshipMappings;
@property (retain) NSExpression *sourceExpression;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (copy) NSString *entityMigrationPolicyClassName;

+ (void)initialize;

- (void)_throwIfNotEditable;
- (void)_createCachesAndOptimizeState;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEditable;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)_setIsEditable:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithSourceEntityDescription:(id)a0 destinationEntityDescription:(id)a1;
- (void)dealloc;

@end
