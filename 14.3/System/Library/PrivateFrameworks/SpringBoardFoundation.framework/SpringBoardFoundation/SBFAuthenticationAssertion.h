@class NSString, SBFUserAuthenticationController;

@interface SBFAuthenticationAssertion : NSObject <BSDescriptionProviding> {
    BOOL _activated;
    BOOL _invalidated;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, weak, nonatomic) SBFUserAuthenticationController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publicDescription;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 type:(long long)a1 withController:(id)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)activate;
- (id)succinctDescriptionBuilder;
- (void)invalidate;

@end
