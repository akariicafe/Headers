@class NSString, NSData, NSEntityDescription;

@interface NSRelationshipDescription : NSPropertyDescription {
    void *_reserved5;
    void *_reserved6;
    NSEntityDescription *_destinationEntity;
    NSString *_lazyDestinationEntityName;
    NSRelationshipDescription *_inverseRelationship;
    NSString *_lazyInverseRelationshipName;
    unsigned long long _maxCount;
    unsigned long long _minCount;
    unsigned long long _deleteRule;
}

@property (nonatomic) NSEntityDescription *destinationEntity;
@property (nonatomic) NSRelationshipDescription *inverseRelationship;
@property unsigned long long maxCount;
@property unsigned long long minCount;
@property unsigned long long deleteRule;
@property (readonly, getter=isToMany) BOOL toMany;
@property (readonly, copy) NSData *versionHash;
@property (getter=isOrdered) BOOL ordered;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (void)_writeIntoData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 entitiesSlots:(id)a5 fetchRequests:(id)a6;
- (BOOL)_isToManyRelationship;
- (BOOL)_nonPredicateValidateValue:(id *)a0 forKey:(id)a1 inObject:(id)a2 error:(id *)a3;
- (unsigned long long)_propertyType;
- (void)_createCachesAndOptimizeState;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isSchemaEqual:(id)a0;
- (void)_versionHash:(char *)a0 inStyle:(unsigned long long)a1 proxyContext:(id)a2;
- (BOOL)isIndexed;
- (void)_versionHash:(char *)a0 inStyle:(unsigned long long)a1;
- (BOOL)_isRelationship;
- (id)_initWithName:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;

@end
