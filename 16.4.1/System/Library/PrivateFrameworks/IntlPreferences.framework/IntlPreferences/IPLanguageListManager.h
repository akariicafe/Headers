@class NSArray, NSString, NSLocale;

@interface IPLanguageListManager : NSObject

@property (retain, nonatomic) NSArray *preferredLanguages;
@property (retain, nonatomic) NSLocale *preferredLocale;
@property (readonly, nonatomic) NSArray *systemLanguages;
@property (readonly, nonatomic) NSString *systemDisplayLanguage;

+ (void)preheat;
+ (id)generator;
+ (id)manager;
+ (BOOL)canRemoveLanguages:(id)a0 fromPreferredLanguages:(id)a1;
+ (id)effectiveSystemLanguagesWithUnsupportedVariant:(BOOL)a0 forPreferredLanguages:(id)a1;
+ (id)regionalVariantLanguagesForBaseLanguage:(id)a0;
+ (id)regionalVariantLanguagesForSystemLanguages;
+ (void)sortByLocalizedLanguage:(id)a0;

- (void).cxx_destruct;
- (id)deviceLanguagesForChangingDeviceLanguage:(BOOL)a0;
- (id)initWithPreferredLanguages:(id)a0;
- (id)initWithPreferredLanguages:(id)a0 preferredLocale:(id)a1;
- (id)initWithPreferredLanguages:(id)a0 preferredLocale:(id)a1 systemLanguages:(id)a2;
- (id)languageVariants;
- (id)otherLanguages;
- (void)setRegion:(id)a0 updateFirstLanguage:(BOOL)a1;

@end
