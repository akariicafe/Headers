@class NSString, NSArray, NSDictionary, IKJSRWIDependencyDomain;

@interface IKJSRWIDependencyDomainType : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *domainType;
@property (readonly, nonatomic) NSString *purpose;
@property (readonly, weak, nonatomic) IKJSRWIDependencyDomain *domain;
@property (readonly, nonatomic) NSArray *initializationParameters;
@property (readonly, nonatomic) NSDictionary *properties;

- (BOOL)isValidWithError:(id *)a0;
- (void).cxx_destruct;
- (id)initializationSelectorString;
- (BOOL)isInitializerValid;
- (id)invalidProperties;
- (id)initializationString;
- (id)initWithTypeDictionary:(id)a0 forDomain:(id)a1;
- (id)typeInterfaceString;
- (id)typeImplementationStringWithSoftLinking:(BOOL)a0;

@end
