@class NSSet, NSString, NSArray;

@interface RMModelActivationSimpleDeclaration : RMModelActivationBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSArray *payloadStandardConfigurations;
@property (copy, nonatomic) NSString *payloadPredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0 standardConfigurations:(id)a1;
+ (id)buildWithIdentifier:(id)a0 standardConfigurations:(id)a1 predicate:(id)a2;

@end
