@class NSSet, NSString;

@interface SBLayoutState : NSObject <BSDescriptionProviding> {
    long long _interfaceOrientation;
    long long _elementInterfaceOrientation;
}

@property (readonly, nonatomic) NSSet *elements;
@property (readonly, nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic) long long elementInterfaceOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_defaultInterfaceOrientation;

- (id)elementWithRole:(long long)a0;
- (id)elementWithIdentifier:(id)a0;
- (id)init;
- (id)displayItemFromLayoutElement:(id)a0;
- (BOOL)isEqual:(id)a0 withRole:(long long)a1;
- (void).cxx_destruct;
- (id)_initWithLayoutElements:(id)a0 interfaceOrientation:(long long)a1 elementInterfaceOrientation:(long long)a2;
- (BOOL)layoutContainsRole:(long long)a0;
- (id)appLayout;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)floatingAppLayout;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;

@end
