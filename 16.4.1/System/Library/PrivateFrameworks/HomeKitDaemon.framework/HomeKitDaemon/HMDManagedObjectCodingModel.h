@class NSArray, NSManagedObjectModel, HMDEntityCodingDescription, NSDictionary, NSOrderedSet, NSString;

@interface HMDManagedObjectCodingModel : NSObject {
    NSManagedObjectModel *_model;
    unsigned long long _options;
    HMDEntityCodingDescription *_root;
    NSDictionary *_descriptions;
    NSOrderedSet *_conditions;
    BOOL _hasAnyReferenceRelationships;
    NSString *_typeIDConfigKey;
    NSString *_keyAttributesConfigKey;
    NSString *_refContextConfigKey;
    NSString *_includeConfigKey;
    NSString *_codingKeyConfigKey;
    NSString *_transformerConfigKey;
    NSString *_inlineConfigKey;
    NSString *_conditionalConfigKey;
    SEL _contextualizeConditionsSelector;
    SEL _attributeValueForKeySelector;
}

@property (class, readonly) unsigned long long defaultOptions;

@property (readonly) NSManagedObjectModel *objectModel;
@property (readonly) HMDEntityCodingDescription *rootDescription;
@property (readonly) NSArray *allDescriptions;
@property (readonly) BOOL hasOnlyParentChildRelationships;

- (void).cxx_destruct;
- (id)decodeRootObjectFromReader:(id)a0;
- (id)descriptionForAttribute:(id)a0;
- (id)descriptionForDestinationOfRelationship:(id)a0;
- (id)descriptionForEntity:(id)a0;
- (id)descriptionForManagedObject:(id)a0;
- (id)descriptionForRelationship:(id)a0;
- (BOOL)encodeRootObject:(id)a0 withWriter:(id)a1;
- (BOOL)encodeRootObject:(id)a0 withWriter:(id)a1 changes:(id)a2 conditions:(id)a3 userContext:(id)a4;
- (id)initWithModel:(id)a0 configNamespace:(id)a1 rootEntity:(id)a2;
- (id)initWithModel:(id)a0 configNamespace:(id)a1 rootEntity:(id)a2 options:(unsigned long long)a3;
- (id)initWithModel:(id)a0 configNamespace:(id)a1 rootEntityName:(id)a2;
- (id)initWithModel:(id)a0 configNamespace:(id)a1 rootEntityName:(id)a2 options:(unsigned long long)a3;
- (id)insertOrUpdateRootObjectInContext:(id)a0 fromReader:(id)a1;
- (BOOL)isRelevantChanges:(id)a0 withRootObject:(id)a1 conditions:(id)a2 userContext:(id)a3;
- (BOOL)isValidCondition:(id)a0;
- (id)subentityOfDescription:(id)a0 withTypeID:(id)a1;
- (BOOL)updateRootObject:(id)a0 fromReader:(id)a1;

@end
