@interface _UIKeyboardWindowScene : _UIScreenBasedWindowScene

+ (BOOL)shouldAllowComponents;
+ (BOOL)autoinvalidates;
+ (BOOL)alwaysKeepContexts;

- (id)initWithScreen:(id)a0 session:(id)a1 lookupKey:(id)a2;
- (id)_fixupInheritedSettings:(id)a0;

@end
