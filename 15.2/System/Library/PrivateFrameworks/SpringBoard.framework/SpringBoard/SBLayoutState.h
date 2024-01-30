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

- (id)appLayout;
- (id)elementWithRole:(long long)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (BOOL)layoutContainsRole:(long long)a0;
- (id)elementWithIdentifier:(id)a0;
- (id)_initWithLayoutElements:(id)a0 interfaceOrientation:(long long)a1 elementInterfaceOrientation:(long long)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)isEqual:(id)a0 withRole:(long long)a1;
- (id)succinctDescriptionBuilder;
- (id)floatingAppLayout;
- (id)displayItemFromLayoutElement:(id)a0;

@end
