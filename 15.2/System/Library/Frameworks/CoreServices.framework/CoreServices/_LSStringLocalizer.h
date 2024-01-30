@class NSArray, NSString, NSMutableDictionary, _LSLazyPropertyList;

@interface _LSStringLocalizer : NSObject {
    struct __CFBundle { } *_bundle;
    NSString *_stringsFile;
    NSMutableDictionary *_stringsFileContent;
    _LSLazyPropertyList *_unlocalizedInfoPlistStrings;
    NSArray *_bundleLocalizations;
    NSArray *_bundleLocalizationsWithDefaultPrefLocs;
}

@property (class, copy) NSArray *preferredLocalizationsForXCTests;
@property (class, readonly) _LSStringLocalizer *frameworkBundleLocalizer;
@property (class, readonly) _LSStringLocalizer *coreTypesLocalizer;
@property (class, readonly) NSString *missingLocalizationPlaceholder;

+ (id)IOQueue;
+ (void)findKeysToLocalizeInInfoDictionary:(id)a0 forArrayKey:(struct __CFString { } *)a1 stringKey:(struct __CFString { } *)a2 localizedKeys:(id)a3;
+ (id)localizedStringForCanonicalString:(id)a0 preferredLocalizations:(id)a1 context:(struct LSContext { id x0; } *)a2;
+ (void)gatherLocalizedStringsForCFBundle:(struct __CFBundle { } *)a0 infoDictionary:(id)a1 nameOnly:(BOOL)a2;
+ (id)localizedStringsForCanonicalString:(id)a0 context:(struct LSContext { id x0; } *)a1;
+ (void)setPreferredLocalizationsForXCTests:(id)a0;
+ (id)preferredLocalizationsForXCTests;

- (id)localizedStringsWithStrings:(id)a0 preferredLocalizations:(id)a1;
- (id)localizedStringDictionaryWithString:(id)a0 defaultValue:(id)a1;
- (id)stringsFileContentInBundle:(struct __CFBundle { } *)a0 withLocaleCode:(id)a1;
- (id)localizedStringWithString:(id)a0 inBundle:(struct __CFBundle { } *)a1 preferredLocalizations:(id)a2;
- (id)localizedStringWithString:(id)a0 preferredLocalizations:(id)a1;
- (id)localizedStringWithString:(id)a0 inBundle:(struct __CFBundle { } *)a1 localeCode:(id)a2;
- (void)enumerateLocalizedStringsForKeys:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithBundleURL:(id)a0 stringsFile:(id)a1;
- (void)enumerateLocalizedStringsUsingBlock:(id /* block */)a0;
- (id)initWithDatabase:(id)a0 bundleUnit:(unsigned int)a1 delegate:(unsigned int)a2;
- (id)initWithCFBundle:(struct __CFBundle { } *)a0 stringsFile:(id)a1;
- (id)initWithDatabase:(id)a0 pluginUnit:(unsigned int)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)debugDescription;

@end
