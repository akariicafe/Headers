@class NSString, NSSet, NSDictionary, NSOrderedSet;

@interface BSServiceDomainSpecification : NSObject <BSDescriptionProviding> {
    NSDictionary *_servicesByIdentifier;
    NSOrderedSet *_orderedServices;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *machName;
@property (readonly, copy, nonatomic) NSSet *services;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serviceForIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;

@end
