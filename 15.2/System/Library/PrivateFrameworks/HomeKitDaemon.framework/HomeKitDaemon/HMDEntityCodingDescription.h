@class NSString, NSEntityDescription, NSDictionary;

@interface HMDEntityCodingDescription : NSObject {
    NSEntityDescription *_entity;
    NSString *_typeID;
    NSDictionary *_keyAttributesByCodingKey;
    NSDictionary *_attributesByCodingKey;
    NSDictionary *_relationshipsByCodingKey;
    NSDictionary *_concreteSubentitiesByTypeID;
}

@property (readonly) NSEntityDescription *entity;
@property (readonly) NSString *name;
@property (readonly) NSString *typeID;
@property (readonly) BOOL hasConcreteSubentities;
@property (readonly) NSDictionary *keyAttributesByCodingKey;
@property (readonly) NSDictionary *attributesByCodingKey;
@property (readonly) NSDictionary *relationshipsByCodingKey;
@property (readonly) NSDictionary *concreteSubentitiesByTypeID;

- (void).cxx_destruct;

@end
