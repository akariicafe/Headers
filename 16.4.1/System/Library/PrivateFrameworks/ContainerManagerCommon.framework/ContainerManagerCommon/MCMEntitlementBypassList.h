@class NSDictionary, NSSet;

@interface MCMEntitlementBypassList : NSObject {
    NSSet *_bypassListedLookupByContainer[15];
    NSDictionary *_bypassListedLookupByCodeSignIdentifier;
}

@property (retain, nonatomic) NSDictionary *systemEntitlementBypassList;
@property (retain, nonatomic) NSDictionary *systemGroupEntitlementBypassList;

+ (id)sharedBypassList;

- (BOOL)isLookupAllowedToBypassEntitlementFromCodeSignIdentifier:(id)a0 forContainerClass:(unsigned long long)a1 containerIdentifier:(id)a2;
- (BOOL)systemContainerIdIsWellknown:(id)a0;
- (id)wellKnownContainerIdentifiersForSandboxPushDownCompatibilitySet;
- (id)initWithSystemContainerMapping:(id)a0 systemGroupContainerMapping:(id)a1 bypassListedContainerMapping:(id)a2 bypassListedCodeSignIdentifierMapping:(id)a3;
- (id)wellknownSystemContainers;
- (id)wellknownSystemGroupContainerForId:(id)a0;
- (BOOL)containerIdIsWellknown:(id)a0 class:(unsigned long long)a1;
- (id)wellknownContainerForId:(id)a0 class:(unsigned long long)a1;
- (id)wellknownSystemGroupContainers;
- (id)_convertArraysToSetsInNestedDictionary:(id)a0;
- (BOOL)systemGroupContainerIdIsWellknown:(id)a0;
- (id)wellknownSystemContainerForId:(id)a0;
- (void).cxx_destruct;

@end
