@interface SearchUILaunchAppHandler : SearchUICommandHandler

+ (id)fallbackCommandForRowModel:(id)a0 environment:(id)a1;
+ (void)openApplicationWithBundleIdentifier:(id)a0 environment:(id)a1;

- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;

@end
