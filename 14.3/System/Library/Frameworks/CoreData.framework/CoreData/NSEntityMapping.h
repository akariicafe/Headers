@class NSString, NSArray, NSData, NSExpression, NSDictionary, NSMutableArray;

@interface NSEntityMapping : NSObject <NSCoding, NSSecureCoding> {
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

- (BOOL)isEditable;
- (void)_createCachesAndOptimizeState;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)_setIsEditable:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)_setChangeIsSchemaCompatible:(BOOL)a0;
- (id)_initWithSourceEntityDescription:(id)a0 destinationEntityDescription:(id)a1;
- (void)_throwIfNotEditable;
- (id)_mappingsByName;
- (id)_migrationPolicy;
- (void)_addAttributeMapping:(id)a0;
- (void)_addRelationshipMapping:(id)a0;
- (BOOL)_hasInferredMappingNeedingValidation;
- (BOOL)_changeIsSchemaCompatible;
- (void)encodeWithCoder:(id)a0;

@end
