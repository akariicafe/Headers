@interface HBXTypeSupport : NSObject

+ (id)categoryStringForIdentifier:(long long)a0;
+ (id)displayNameForType:(id)a0 inHealthStore:(id)a1;
+ (void)enumerateDisplayCategoriesWithHandler:(id /* block */)a0;
+ (id)iconForType:(id)a0;
+ (id)typesInCategory:(long long)a0;
+ (long long)categoryIdentifierForString:(id)a0;
+ (id)categoryIdentifiersForType:(id)a0;
+ (long long)codeForType:(id)a0;
+ (id)makeTypeForCode:(long long)a0;

@end
