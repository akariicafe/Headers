@class NSDictionary;

@interface ACMBaseLocale : NSObject

@property (retain, nonatomic) ACMBaseLocale *nextLocale;
@property (retain, nonatomic) NSDictionary *localeStrings;

+ (id)sharedInstance;
+ (void)initialize;
+ (id)localizedString:(id)a0;
+ (id)createLocaleForIdentifier:(id)a0;
+ (void)setupUsingPreferredLanguages;
+ (void)setupRecoveringPreferredLanguages;

- (id)objectForKey:(id)a0;
- (void)dealloc;

@end
