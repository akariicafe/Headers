@class NSSet, NSMutableDictionary, NSMutableSet;

@interface NUAdContextDefinition : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableDictionary *nestedContextDefinitions;
@property (readonly, nonatomic) NSMutableSet *mutablePropertyDefinitions;
@property (readonly, nonatomic) NSSet *propertyDefinitions;

+ (id)definition;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addPropertyDefinition:(id)a0;
- (BOOL)isPropertyDefinitionValid:(id)a0;

@end
