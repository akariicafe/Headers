@class NSString;

@interface _UIPlaceholderWindowScene : _UIScreenBasedWindowScene <_UIContextBinderContextCreationPolicyHolding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldAllowComponents;
+ (BOOL)autoinvalidates;
+ (BOOL)alwaysKeepContexts;

- (BOOL)_permitContextCreationForBindingDescription:(struct { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; })a0;

@end
