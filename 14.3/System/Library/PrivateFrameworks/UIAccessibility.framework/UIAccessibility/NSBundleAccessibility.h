@interface NSBundleAccessibility : __NSBundleAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (BOOL)loadAndReturnError:(id *)a0;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;

@end
