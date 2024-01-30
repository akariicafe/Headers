@class NSURL;

@interface WBSPasswordManagerURL : NSObject

@property (class, readonly, nonatomic) NSURL *passwordManagerSecurityRecommendationsURL;

+ (BOOL)boolForPasswordManagerResourceDictionary:(id)a0 key:(id)a1 defaultValue:(BOOL)a2;
+ (BOOL)isOtpauthResourceDictionary:(id)a0;
+ (BOOL)isPasswordManagerSecurityRecommendationsResourceDictionary:(id)a0;
+ (id)passwordManagerURLWithDictionary:(id)a0;
+ (id)valueForPasswordManagerResourceDictionary:(id)a0 key:(id)a1;
+ (id)valueForPasswordManagerURL:(id)a0 key:(id)a1;
+ (BOOL)_urlIsPasswordManagerURLWithScheme:(id)a0 resourceSpecifierDictionary:(id)a1;
+ (id)_resourceSpecifierDictionaryForURL:(id)a0;
+ (BOOL)_resourceSpecifierDictionaryIsPasswordManagerResourceSpecifierDictionary:(id)a0;
+ (id)_resourceSpecifierEncodedKey:(id)a0 value:(id)a1;
+ (id)dictionaryWithPasswordManagerURL:(id)a0;
+ (BOOL)urlIsPasswordManagerURL:(id)a0;

@end
