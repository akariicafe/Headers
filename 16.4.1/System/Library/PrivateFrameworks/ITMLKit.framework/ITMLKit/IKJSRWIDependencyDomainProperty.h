@class NSString, NSArray, IKJSRWIDependencyDomainType, IKJSRWIDependencyDomain;

@interface IKJSRWIDependencyDomainProperty : NSObject {
    NSString *_reference;
    NSArray *_enumOptions;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *purpose;
@property (readonly, nonatomic, getter=isRequired) BOOL required;
@property (readonly, nonatomic) NSString *propertyType;
@property (readonly, weak, nonatomic) IKJSRWIDependencyDomainType *domainType;
@property (readonly, weak, nonatomic) IKJSRWIDependencyDomain *domain;

+ (id)propertyNameMapping;
+ (id)typeMapping;

- (id)initWithPropertyDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithPropertyDictionary:(id)a0 forDomain:(id)a1;
- (id)initWithPropertyDictionary:(id)a0 forType:(id)a1;
- (id)methodParameterString;
- (id)propertyDefinitionString;

@end
