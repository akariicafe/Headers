@interface LNApplicationConnection : LNConnection

- (id)appBundleIdentifier;
- (id)initWithBundleIdentifier:(id)a0;
- (void)handleConnectionActionResponse:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1 error:(id *)a2;

@end
