@class NSArray, NSMapTable, NSString, NSLocale;

@interface INStringLocalizer : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSMapTable *bundlesByIdentifier;
@property (readonly, nonatomic) NSMapTable *bundlesByURL;
@property (readonly, nonatomic) NSMapTable *bundleLocalizations;
@property (readonly, nonatomic) NSMapTable *preferredBundleLocalizations;
@property (readonly, nonatomic) NSArray *preferredLanguages;
@property (readonly, copy, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSLocale *locale;

+ (id)siriLocalizer;
+ (id)alternativeLocales;
+ (id)localizerForLanguage:(id)a0;

- (id)preferredLocalizationsForBundle:(struct __CFBundle { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (struct __CFBundle { } *)bundleWithIdentifier:(id)a0 fileURL:(id)a1;
- (BOOL)matchesBundleLocalizations:(struct __CFBundle { } *)a0;
- (id)localizationsForBundle:(struct __CFBundle { } *)a0;
- (id)initWithLanguageCode:(id)a0;

@end
