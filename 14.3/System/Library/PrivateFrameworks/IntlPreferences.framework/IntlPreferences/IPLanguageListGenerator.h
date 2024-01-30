@class NSArray, NSString, NSLocale;

@interface IPLanguageListGenerator : NSObject

@property (readonly, nonatomic) NSArray *preferredLanguages;
@property (readonly, nonatomic) NSLocale *preferredLocale;
@property (readonly, nonatomic) NSArray *systemLanguages;
@property (readonly, nonatomic) NSString *systemDisplayLanguage;

+ (void)preheat;
+ (id)generator;
+ (id)effectiveSystemLanguagesWithUnsupportedVariant:(BOOL)a0 forPreferredLanguages:(id)a1;
+ (id)regionalVariantLanguagesForSystemLanguages;
+ (id)regionalVariantLanguagesForBaseLanguage:(id)a0;
+ (void)sortByLocalizedLanguage:(id)a0;
+ (BOOL)canRemoveLanguages:(id)a0 fromPreferredLanguages:(id)a1;

- (void).cxx_destruct;
- (id)initWithPreferredLanguages:(id)a0 preferredLocale:(id)a1 systemLanguages:(id)a2;
- (id)deviceLanguagesForChangingDeviceLanguage:(BOOL)a0;
- (id)otherLanguages;

@end
