@class NSDictionary, NSSet, NSString;

@interface SBLayoutState : NSObject <BSDescriptionProviding>

@property (nonatomic) long long interfaceOrientation;
@property (copy, nonatomic) NSDictionary *interfaceOrientationByLayoutElementIdentifier;
@property (readonly, nonatomic) NSSet *elements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)interfaceOrientationForLayoutElement:(id)a0;
- (void)invalidateAppLayout;
- (id)appLayout;
- (long long)interfaceOrientationForLayoutElement:(id)a0 unknownAllowed:(BOOL)a1;
- (long long)interfaceOrientationForLayoutRole:(long long)a0;
- (id)elementWithRole:(long long)a0;
- (long long)_defaultInterfaceOrientation;
- (id)floatingAppLayout;
- (BOOL)layoutContainsRole:(long long)a0;
- (id)elementWithIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0 withRole:(long long)a1;
- (id)_initWithLayoutElements:(id)a0 interfaceOrientation:(long long)a1 interfaceOrientationByLayoutElement:(id)a2;
- (long long)interfaceOrientationForElementIdentifier:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)invalidateFloatingAppLayout;
- (id)succinctDescriptionBuilder;
- (long long)_interfaceOrientationForElementIdentifier:(id)a0 unknownAllowed:(BOOL)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)isMeaningfullyDifferentFromLayoutState:(id)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
