@class NSString, SBIconController;

@interface SBIconsOccludedAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>

@property (readonly, weak, nonatomic) SBIconController *iconController;
@property (readonly, copy, nonatomic) NSString *reason;
@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (void)dealloc;
- (id)initWithIconController:(id)a0 reason:(id)a1;

@end
