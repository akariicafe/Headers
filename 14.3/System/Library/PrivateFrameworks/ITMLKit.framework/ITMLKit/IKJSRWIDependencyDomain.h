@class NSString, NSDictionary;

@interface IKJSRWIDependencyDomain : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) Class agentClass;
@property (readonly, nonatomic) NSString *dispatcherClassString;
@property (readonly, nonatomic) NSDictionary *types;
@property (readonly, nonatomic) NSDictionary *commands;
@property (readonly, nonatomic) NSDictionary *events;

+ (id)allDomains;
+ (id)allowedDomains;
+ (id)domainAgentClassMap;
+ (void)processDomains:(id)a0;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;
- (id)initWithDomainDictionary:(id)a0 agentClass:(Class)a1;
- (BOOL)isValidForTypesWithError:(id *)a0;
- (BOOL)isValidForAgentWithError:(id *)a0;
- (BOOL)isValidForEventsWithError:(id *)a0;

@end
