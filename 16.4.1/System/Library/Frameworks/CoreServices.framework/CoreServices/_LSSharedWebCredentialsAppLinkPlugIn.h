@interface _LSSharedWebCredentialsAppLinkPlugIn : _LSAppLinkPlugIn

- (id)init;
- (id)appLinksWithContext:(struct LSContext { id x0; } *)a0 error:(id *)a1;
- (id)appLinksWithContext:(struct LSContext { id x0; } *)a0 forSWCResults:(id)a1;
- (struct optional<LSBinding> { union { char x0; struct LSBinding { unsigned int x0; struct LSBundleData *x1; unsigned int x2; struct *x3; id x4; id x5; } x1; } x0; BOOL x1; })bindingWithContext:(struct LSContext { id x0; } *)a0 forServiceDetails:(id)a1 callingBundleIdentifier:(id)a2;
- (id)callingBundleIdentifier;
- (void)enumerateBindingsWithContext:(struct LSContext { id x0; } *)a0 forSWCResults:(id)a1 block:(id /* block */)a2;

@end
