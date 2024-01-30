@class NSSet;

@interface NSSQLAttribute : NSSQLColumn

@property (readonly, nonatomic) NSSet *triggerKeys;

- (BOOL)isFileBackedFuture;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (BOOL)isBackedByTrigger;
- (unsigned char)_sqlTypeForAttributeType:(unsigned long long)a0 flags:(unsigned long long)a1;
- (id)initForReadOnlyFetchWithExpression:(id)a0;
- (void)dealloc;
- (BOOL)isDerivedAttribute;
- (void)addKeyForTriggerOnRelationship:(id)a0;
- (id)attributeDescription;
- (BOOL)shouldIndex;
- (void)_setIsBackedByTrigger:(BOOL)a0;

@end
