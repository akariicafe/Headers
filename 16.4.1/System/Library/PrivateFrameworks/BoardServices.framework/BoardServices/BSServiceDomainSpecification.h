@class NSString, NSSet, NSDictionary, NSOrderedSet;

@interface BSServiceDomainSpecification : NSObject <BSDescriptionProviding> {
    NSDictionary *_servicesByIdentifier;
    NSOrderedSet *_orderedServices;
    unsigned long long _start;
    NSSet *_derivedServiceRestrictions;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *machName;
@property (readonly, copy, nonatomic) NSSet *services;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)serviceForIdentifier:(id)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
