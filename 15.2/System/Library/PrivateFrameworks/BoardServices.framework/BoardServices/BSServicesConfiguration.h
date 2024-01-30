@class NSSet, NSString, NSDictionary, NSOrderedSet;

@interface BSServicesConfiguration : NSObject <BSDescriptionProviding> {
    NSDictionary *_domainsByIdentifier;
    NSOrderedSet *_orderedDomains;
}

@property (readonly, copy, nonatomic) NSSet *domains;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bootstrapConfiguration;
+ (id)registerDynamicDomainsFromPlist:(id)a0;
+ (id)defaultConfiguration;
+ (id)extendAutomaticBootstrapCompletion;
+ (id)activateManualDomain:(id)a0;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)domainsContainingServiceIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)domainForMachName:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)domainForIdentifier:(id)a0;

@end
