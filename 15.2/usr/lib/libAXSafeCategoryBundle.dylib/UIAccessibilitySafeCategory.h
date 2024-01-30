@class NSString;

@interface UIAccessibilitySafeCategory : NSObject

@property (copy, nonatomic) NSString *accessibilityIdentifier;

+ (Class)safeCategoryBaseClass;
+ (id)_installSafeCategoryValidationMethod;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (id)safeCategoryTargetClassName;
+ (id)_installSafeCategoryOnClassNamed:(id)a0 isManaged:(BOOL)a1;
+ (id)_installLocalValidationMethodOnClassNamed:(id)a0;
+ (void)_addCategoryMethods:(struct objc_method **)a0 count:(unsigned int)a1 excluding:(SEL *)a2 count:(unsigned int)a3 toClass:(Class)a4 isClass:(BOOL)a5;
+ (id)_installSafeCategoryOnClass:(Class)a0 isManaged:(BOOL)a1;
+ (Class)safeCategoryTargetClass;
+ (void)safeCategoryAddDependenciesToCollection:(id)a0;
+ (void)_installSafeCategoryOnClassNamed:(id)a0;

@end
