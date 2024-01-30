@class NSSet, NSString, NSArray, CEMPredicateBase;

@interface CEMActivationSimpleDeclaration : CEMDeclarationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSArray *payloadStandardConfigurations;
@property (copy, nonatomic) CEMPredicateBase *payloadPredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildWithIdentifier:(id)a0 withStandardConfigurations:(id)a1 withPredicate:(id)a2;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withStandardConfigurations:(id)a1;

@end
